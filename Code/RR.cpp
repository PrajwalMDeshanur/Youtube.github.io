// C++ Program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print load on each server
void printLoadOnEachServer(
	int m, int loadOnServer[])
{
	// Traverse the loadOnServer and
	// print each loads
	for (int i = 0; i < m; i++) {

		cout << i + 1 << "st Server -> "
			<< loadOnServer[i] << ".\n";
	}
}

// Function for finding the load
// on each server
void loadBalancing(int n, int m,
				int arrivalTime[],
				int processTime[])
{
	// Stores the load on each Server
	int loadOnServer[m];

	for (int i = 0; i < m; i++) {

		// Initialize load on each
		// server as zero
		loadOnServer[i] = 0;
	}

	// Minimum priority queue for
	// storing busy servers according
	// to their release time
	priority_queue<pair<int, int>,
				vector<pair<int, int> >,
				greater<pair<int, int> > >
		busyServers;

	// Set to store available Servers
	set<int> availableServers;

	for (int i = 0; i < m; i++) {

		// Initially, all servers are free
		availableServers.insert(i);
	}

	// Iterating through the requests.
	for (int i = 0; i < n; i++) {

		// End time of current request
		// is the sum of arrival time
		// and process time
		int endTime = arrivalTime[i]
					+ processTime[i];

		// Releasing all the servers which
		// have become free by this time
		while (!busyServers.empty()
			&& busyServers.top().first
					<= arrivalTime[i]) {

			// Pop the server
			pair<int, int> releasedServer
				= busyServers.top();
			busyServers.pop();

			// Insert available server
			availableServers.insert(
				releasedServer.second);
		}

		// If there is no free server,
		// the request is dropped
		if ((int)availableServers.empty()) {
			continue;
		}

		int demandedServer = i % m;

		// Searching for demanded server
		auto itr
			= availableServers.lower_bound(
				demandedServer);

		if (itr == availableServers.end()) {

			// If demanded Server is not free
			// and no server is free after it,
			// then choose first free server
			itr = availableServers.begin();
		}

		int assignedServer = *itr;

		// Increasing load on assigned Server
		loadOnServer[assignedServer]++;

		// Removing assigned server from list
		// of assigned servers
		availableServers.erase(assignedServer);

		// Add assigned server in the list of
		// busy servers with its release time
		busyServers.push({ endTime,
						assignedServer });
	}

	// Function to print load on each server
	printLoadOnEachServer(m, loadOnServer);
}

// Driver Code
int main()
{
	// Given arrivalTime and processTime
	int arrivalTime[] = { 1, 2, 4, 6 };
	int processTime[] = { 7, 1, 4, 4 };

	int N = sizeof(arrivalTime)
			/ sizeof(int);

	int M = 2;

	// Function Call
	loadBalancing(N, M, arrivalTime,
				processTime);

	return 0;
}
