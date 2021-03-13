#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
using namespace std;
vi adj[10001] , rev[10001], out_time;
bool vis[1001];
int cnt=0;
void dfs(int node)
{
  vis[node] = 1;
  
  for(int child : adj[node])
    if(vis[child] == 0)
       dfs(child);
  
  out_time.pb(node);
}

void dfsrev(int node)
{
  vis[node] = 1;
  
  for(int child : rev[node])
    if(vis[child] == 0)
      dfsrev(child);
}

int main()
{
    int n,m; cin>>n>>m;
    for (int i = 1; i <= m; i++)
    {
      int a,b;
      cin>>a>>b;
      adj[a].pb(b);
      rev[b].pb(a);
    }
    
    for (int i = 1; i <= n; i++)
      if(vis[i] == 0) dfs(i);
    
    for (int i = 1; i <= n; i++)
       vis[i] = 0;
    
  for (int i = 1; i <= n; i++)
    if(vis[out_time[n-i]] == 0)
      dfsrev(out_time[n - i]),cnt++;
 


  cout<<cnt<<endl;
  
}


