//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool dfs(vector<int>adj[],int n,int a,int pre,vector<bool>&vis){
        vis[a]=1;
        
        for(auto it:adj[a]){
            if(vis[it]==1 && it!=pre){
                return 1;
            }
            if(vis[it]!=1 && dfs(adj,n,it,a,vis)){
                return 1;
            }
        }
        return 0;
        
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool>vis(V);
        for(int i=0;i<V;i++){
        
            if(vis[i]!=1 && dfs(adj,V,i,-1,vis)){
                return 1;
            }
        }
        return 0;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends