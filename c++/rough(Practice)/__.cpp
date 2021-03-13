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
#define mod 1000000007
using namespace std;
vi arr[100005];
bool vis[100005];
ll node_cnt=0;
void dfs(ll node)
{
    vis[node]=1;
    node_cnt++;
    for(auto child:arr[node])
        if(vis[child]==0)
            dfs(child);
}

int main()
{
    fastio;
tc{
int n,m;cin>>n>>m;
for(ll i=1;i<=n;i++)
{   vis[i]=0;
    arr[i].clear();
}

for(ll i=1;i<=m;i++)
{
    int a,b;cin>>a>>b;
    arr[a].pb(b) , arr[b].pb(a);
}

ll cnt=0, res=1;

for(ll i=1;i<=n;i++)
{if(vis[i]==0)
{
    node_cnt=0;
    dfs(i), cnt++;
    res=(res*node_cnt)%mod;
}}
cout<<cnt<<" "<<res<<endl;

}
return 0;
}
