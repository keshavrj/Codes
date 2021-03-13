#include<bits/stdc++.h>
using namespace std;
vector<int> arr[2005];
int vis[2005], col[2004];
bool dfs(int node, int c)
{
	vis[node]=1;
	col[node]=c;
	for(int child:arr[node])
	{ bool res;
		if(!vis[child])
			{res=dfs(child,c^1);
			if(res==0)
				return false;}
		else if(col[child]==col[node])
			return false;
	
	}
	return true;
}
int main()
{


   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif
	int t;cin>>t;
	for(int tt=1;tt<=t;tt++)
	{
		bool ans, flag=1;
		int n,m,u,v;cin>>n>>m;
		for(int i=1;i<=n;i++)
		arr[i].clear(),vis[i]=0;
		
		for(int i=1;i<=m;i++)
		{
			cin>>u>>v;
			arr[u].push_back(v), arr[v].push_back(u);
		}
		for(int i=1;i<=n;i++)
			{
				if(!vis[i])
					ans=dfs(i,1);
				if(ans==false)
				{flag=false;
				}
				
			}
		cout<<"Scenario #"<<tt<<":\n";
		if(!flag)
				cout<<"Suspicious bugs found!\n";
		else
			cout<<"No suspicious bugs found!\n";
	}
}