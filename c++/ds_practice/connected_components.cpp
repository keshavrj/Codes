#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define vi vector<int>
#define tc long tc;cin>>tc;while(tc--)
vi adj[100001];
bool vis[100001];
void dfs(int node)
{
	vis[node]=1;
	// cout<<node<<"->";
	for(int child:adj[node])
		if(!vis[child])
			dfs(child);

}
int main()
{
	// freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
	fastio;
int n,m, cnt=0;cin>>n>>m;
for(int i=0;i<m;i++)
{
	int a, b;
	cin>>a>>b;
	adj[a].push_back(b);
	adj[b].push_back(a);
}
for(int i=1;i<=n;i++)
{
	if(!vis[i])
	{
		dfs(i);
		cnt++;
		// cout<<endl;
	}
}

cout<<cnt<<endl;


}