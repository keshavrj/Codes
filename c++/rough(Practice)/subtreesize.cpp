
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
vi arr[10005],subtsize(10005);
bool vis[10005];
int maxd, maxnode;
int dfs(int node)
{
    vis[node]=1;
    int curr_size=1;

    for(int i:arr[node])
        if(!vis[i])
            curr_size+=dfs(i);
    subtsize[node]=curr_size;
    return curr_size;
}

int main()
{
    fastio;
int n;cin>>n;
for(int i=1;i<n;i++)
{
    int a,b;cin>>a>>b;
    arr[a].pb(b), arr[b].pb(a);
}
dfs(1);

for(int i=1;i<=n;i++) cout<<subtsize[i]<<"  ";
cout<<endl;

return 0;
}

