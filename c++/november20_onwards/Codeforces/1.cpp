#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
int arr[10005];
vi adj[10005];
bool vis[10005];
bool flag=1;
vi res;
ll sum=0, cnt=0;
void dfs(int node)
{
	if(!flag)
		res.pb(node);
  sum+=arr[node];
  vis[node] = 1;
  cnt++;
  
  for(int c:adj[node])
    if(vis[c] == 0)
       dfs(c);
  
}

int main()
{
	fastio;

freopen("input1.txt","r",stdin);
freopen("output1.txt","w",stdout);
int n,p;cin>>n;
int index=-1, cnt2=INT_MAX, ans=-1;
for(int i=1;i<=n;i++)
	cin>>arr[i];
cin>>p;
for(int i=0;i<p;i++)
{
	int a,b;
	cin>>a>>b;
	adj[a].pb(b);
	adj[b].pb(a);
}

for(int i=1;i<=n;i++)
{
	if(vis[i]==0)
	{
		sum=0, cnt=0;
		dfs(i);
	
		if(ans<=sum)
		{
			ans=sum;
		if(cnt2>cnt)
			{cnt2=cnt;index=i;}
		}
	}
	
}

for(int i=1;i<=n;i++)
	vis[i]=0;
flag=0;
dfs(index);
sort(res.begin(),res.end());
for(auto x:res)cout<<x<<" ";
}