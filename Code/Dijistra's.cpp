#include<bits/stdc++.h>
using namespace std;



    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
       vector<int> dist(V,1e9);
       dist[S]=0;
       pq.push({0,S});  
       while(!pq.empty())
       {
           auto front=pq.top();   int dis=front.first; int node=front.second; pq.pop();
           for(auto it:adj[node])
           {
               int edgeWeight=it[1];
               int adjNode=it[0];
               if(dis+edgeWeight<dist[adjNode])
               {
                   dist[adjNode]=dis+edgeWeight;
                   pq.push({dist[adjNode],adjNode});
               }
           }
       } 
       return dist;
    }

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while(i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
    
    	vector<int>res=dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


