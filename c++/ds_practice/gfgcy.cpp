#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    bool vis[10005];
    bool dfs( int node , int par, vector<int> adj[])
    {
        vis[node]=1;
        for(int child:adj[node])
        {
            if(!vis[child])
            {    bool res= dfs(child,node, adj);
                if(res)return 1;
            }
            
            else if(child!=par)
                return 1;
            
        }
        return 0;
    }
    
    
    bool isCycle(int V, vector<int>adj[])
    {
     memset(vis, 0, sizeof(vis));
    
    for(int i=0;i<V;i++)
     {
        if( !vis[i] )
            {
                bool ans= dfs(i,-1 , adj);
                if(ans)
                    return true;
            }
     }
    return false;
     // return 7;
        
    }
};

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output.txt","w", stdout);
   #endif
    int tc;

    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;
        vector<int>adj[V];
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if(ans)
            cout << "1\n";
        else cout << "0\n";
    }
    // return 0;
}  // } Driver Code Ends