#include<bits/stdc++.h>
using namespace std;
    void  dfs(int start, vector<int> adj[],vector<int>& visited,vector<int> &ans)
            {
                visited[start]=1;
                ans.push_back(start);
                for(auto it:adj[start])
                {
                    if(visited[it]!=1)
                    {
                        dfs(it,adj,visited,ans);
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
    vector<int> visited(V,0);
    dfs(index,adj,visited,ans);

    for(auto a:ans)
    cout<<a<<" ";

    return 0;
}