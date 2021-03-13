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
vi ad[100006];
bool vis[100006]; 
void dfs(int node)
{
    vis[node]=1;
    for(auto child:ad[node])
    {
        if(!vis[child])
            dfs(child);
    }
}
int main()
{
    fastio;
    int n,m;cin>>n>>m;
   // int arr[n+1]={0};
    //for(int x=1;x<=n;x++)cin>>arr[x];

    for(int i=1;i<=m;i++)
    {
        int a,b;cin>>a>>b;
        ad[a].pb(b), ad[b].pb(a);
    }
    int cc=0;
    for(int i=1;i<=n;i++)
        if(!vis[i])
            dfs(i),cc++;

    cout<<"connected components are: "<<cc<<endl;


    return 0;
}

    