#include<bits/stdc++.h>
using namespace std;
vector<int> g[15];
bool vis[15];
int intime[15], outtime[15];
int ti=1;
void dfs(int root)
{
	vis[root]=1;
	intime[root]=ti;
	ti+=1;
	for(auto c:g[root])
	{
		if(!vis[c])
		{
			dfs(c);
		}
	}
	outtime[root]=ti;
	ti++;
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
	dfs(1);
	for(int i=1;i<=6;i++)
	{
		cout<<"#"<<i<<"-> in_time= "<<intime[i]<<", out_time= "<<outtime[i]<<endl;
	}
}