#include<bits/stdc++.h>
using namespace std;
bool dfs(int node, int par, vector<int> g[], bool vis[])
{
    vis[node]=1;
    for(int child: g[node])
    {
        if(!vis[child])
        {
            bool res= dfs(child, node , g ,vis);
            if(res==true)
                return true;
        }
        else if(child!=par)
            return true;
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
    bool ans, vis[10005]={0};
    //int nd= g[0][0];
     for(int i=0;i<V;i++)
     {
        if(!vis[i])
            ans= dfs(i,-1 , g, vis);
        if(ans)return true;
     }
    return false;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
       vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
 			{}
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}