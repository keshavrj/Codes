#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc int t;cin>>t;while(t--)
#define pb push_back
#define INF 1000000000
using namespace std;
vector<pair<int, int>> adj[100005];
// int dist[100005];
vector<int> dist(100005, INF), pre(100005, -1);
vector<bool> mark(100005,0);

void dijkstra(int s) //source node(s)=1;
{
	// fill(dist, dist+100005, INF);
	priority_queue<pair<int, int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;
	// lesser distance node will be at top;
	pq.push({0,1}); // pair<dist, node>
	dist[s]=0;

	while(!pq.empty())
	{
		int curr_node= pq.top().second;
		
		pq.pop();

		if(mark[curr_node])
			continue;
		mark[curr_node]=1;
		for(auto edge : adj[curr_node]) // edge is a pair<node,dist>
		{
			if(edge.second+ dist[curr_node] < dist[edge.first])
			{
				dist[edge.first]= edge.second+ dist[curr_node] ;
				pq.push({dist[edge.first], edge.first});
				pre[edge.first]= curr_node;
			}
		}
	}


}

int main()
{
 	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;
	int n, m;cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a, b, w;cin>>a>>b>>w;
		adj[a].pb({b,w});
		adj[b].pb({a,w});
	}

	dijkstra(1);
	// for(int i=1;i<=n;i++)
	// 	cout<<dist[i]<<" ";
	if(dist[n]==INF)
		cout<<"NOT POSSIBLE\n";
	else{
		int ans=0, temp=0;
		vector<int> path;

		for(int i= n; i!=1;i=pre[i])
			path.push_back(i);

		path.pb(1);

		reverse(path.begin(), path.end());
		for(int i=1;i<path.size();i++){

			ans+= (dist[path[i]]- dist[path[i-1]] - ans);
			// temp= ans;
		}
		

		// for(int i=1;i<=n;i++)
		// 	cout<<dist[i]<<" ";
		// cout<<endl;
		// for(auto x:path)
		// 	cout<<x<<" ";
		// cout<<endl;
		cout<<max(0, ans)<<endl;

	}
}




