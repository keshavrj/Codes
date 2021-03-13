#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
vi ar[100005];
int vis[100005];

void dfs(int node)
{
 vis[node]=1;
 for(auto i:ar[node])
        if(!vis[i])
        dfs(i);
}


int main()
{
    fastio;
    int cnt=0;
int n,m;cin>>n>>m;
for(int i=1;i<=m;i++)
{int a,b;
cin>>a>>b;
ar[a].pb(b) , ar[b].pb(a);
}
for(int i=1;i<=n;i++)
    if(!vis[i])
    dfs(i),cnt++;


cout<<cnt<<endl;
return 0;
}

