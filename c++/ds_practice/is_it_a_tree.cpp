#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define vi vector<int>
#define tc long tc;cin>>tc;while(tc--)
vi adj[20001];
bool vis[20001];
void dfs(int node)
{
	vis[node]=1;
	// cout<<node<<"->";
	for(int child:adj[node])
		if(!vis[child])
			dfs(child);

}
int count_connected_component(int n)
{
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			dfs(i);
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
	fastio;
int n,m;cin>>n>>m;
for(int i=0;i<m;i++)
{
	int a, b;
	cin>>a>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
}
if(count_connected_component(n)==1 && m==(n-1))
	cout<<"YES\n";
else cout<<"NO\n";

}