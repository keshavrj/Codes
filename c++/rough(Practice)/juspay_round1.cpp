#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];

bool vis[1005];
int dis[1005], pred[1005],  tim[1005];
int n, T, c;
void bfs(int root)
{
	queue<int> q;
	q.push(root);
	dis[root]=0;
	vis[root]=1;
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		for(auto child : adj[t])
		if(!vis[child])
		{
			int waiting_time=0;
			tim[child]= tim[t] + c;
			int tq= tim[child]/T;

			if(tq && (child!=n))
				waiting_time= (tq + 1)*T - tim[child];


			
			tim[child]+=waiting_time;
			q.push(child);
			vis[child] = 1;
			dis[child] = dis[t]+1;
			pred[child]= t;
			if(child==n)
				return;
		}
	}
}
int main()
{

	 freopen("input1.txt", "r", stdin);freopen("output.txt", "w", stdout);

	int  m;
	cin>>n>>m>>T>>c;
	for(int i=0;i<m;i++)
	{
		int a, b;cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=0;i<n;i++)
		{
			dis[i]= INT_MAX;
			// pred[i]=-1;
		}
	bfs(1);

	cout<<tim[n]<<endl;
	

	// for(int i=1;i<=n;i++)
	// 	cout<<tim[i]<<" ";

	// for(int i=1;i<=n;i++)
	// 	cout<<dis[i]<<" ";
	// cout<<endl;

	// for(int i=1;i<=n;i++)
	// 	cout<<pred[i]<<" ";
	// cout<<endl;

	// for(int i=1;i<=n;i++)
	// 	cout<<tim[i]<<" ";
	// cout<<endl;

}