#include<bits/stdc++.h>
using namespace std;
vector<int> g[15];
bool vis[15];
int dis[15];
void dfs(int root, int d)
{
	vis[root]=1;
	dis[root]=d;
	for(auto child:g[root])
	{
		if(!vis[child])
		{
			dfs(child, dis[root]+1);
		}
	}
}

int main()
{
	freopen("input1.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int m;
	cin>>m;
	while(m--)
	{
		int a,b;cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	dfs(1,0);
	for(int i=1;i<=6;i++)
		cout<<dis[i]<<" ";

}