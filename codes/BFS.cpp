#include<bits/stdc++.h>
using namespace std;
    void bfs(int V, vector<int> adj[],vector<int>&ans) {
     
       vector<int> visited(V,0);
       queue<int> q;
       visited[0]=1;
       q.push(0);
       while(!q.empty())
       {
           int node=q.front();
           q.pop();
           ans.push_back(node);
           for(auto it:adj[node])
           {
               if(visited[it]!=1)
               {
                   q.push(it);
                   visited[it]=1;
               }
           }
       }
    }

int main()
{
    int V = 5, E = 4;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[2].push_back(4);
    vector<int> ans;
    int index=0;
    bfs(V,adj,ans);

    for(auto a:ans)
    cout<<a<<" ";

    return 0;
}