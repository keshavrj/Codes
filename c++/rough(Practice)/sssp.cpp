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
bool vis[100005];
int dis[10005];
void dfs(int node,int d)
{
 vis[node]=1;
 dis[node]=d;
 for(auto i:ar[node])
        if(!vis[i])
            dfs(i,dis[node]+1);
}
int main()
{
    fastio;
    int cnt=0;
int n;cin>>n;
for(int i=1;i<=n-1;i++)
{int a,b;
cin>>a>>b;
ar[a].pb(b) , ar[b].pb(a);
}

    dfs(1,0);
int ans=-1;
int mind=INT_MAX;
tc{
int gc;cin>>gc;
if(dis[gc]<mind)
    {
        mind=dis[gc];
        ans=gc;
    }
else if(dis[gc]==mind && gc<ans)
    ans=gc;
}
    cout<<ans<<endl;



return 0;
}


