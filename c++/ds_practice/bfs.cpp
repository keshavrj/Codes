#include<bits/stdc++.h>
using namespace std;
vector<int> g[15];
bool vis[15];
void bfs(int root)
{
	queue<int> q;
	q.push(root);
	cout<<root<<"->";
	vis[root]=1;
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		for(auto child : g[t])
		if(!vis[child])
		{
			cout<<child<<"->";
			q.push(child);
			vis[child]=1;
		}
	}
	cout<<endl;
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
	bfs(1);

}