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
vi arr[100005];
bool vis[100005];
bool dfs(int node, int parent)
{
    vis[node]=1;
    for(int child:arr[node])
    {
        if(vis[child]==0)
            {if(dfs(child,node)==true) return true;}

        else if(child!=parent) return true;
    }
    return false;
}

int main()
{
    fastio;
int n,e;
cin>>n>>e;
for(int i=1;i<=e;i++)
{
    int a,b;cin>>a>>b;
    arr[a].pb(b) , arr[b].pb(a);
}

bool ans=dfs(1,-1);
if(!ans)cout<<"No cycle found"<<endl;
else
 cout<<"there is a cycle \n";


return 0;
}

