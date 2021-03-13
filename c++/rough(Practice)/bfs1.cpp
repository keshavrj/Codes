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
vi ar[10005];
int dis[10005];
bool vis[10005];

void bfs(int node)
{
    queue<int> q;
     q.push(node);
    vis[node]=1;
    dis[node]=0;

   while(!q.empty())
   {
       int curr=q.front();
       q.pop();
       for(int child : ar[curr])
       {
           if(!vis[child])
           {
               q.push(child);
               dis[child]=dis[curr]+1;
               vis[child]=1;
           }
       }

   }


}



int main()
{
    fastio;
tc
{

int n,m;cin>>n>>m;

for(int i=1;i<=n;i++)
{
    vis[i]=0;
    ar[i].clear();
}while(m--)
{
    int a,b;cin>>a>>b;
    ar[a].pb(b);ar[b].pb(a);
}
bfs(1);
cout<<dis[n]<<endl;
}
return 0;
}

