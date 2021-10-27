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
//}

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
























#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
vector<vector<int>> routes;
int n, T, c;
void bfs(int root)
{
	queue<vector<int>> q;
	vector<int> path;
    path.push_back(root);
    q.push(path);
    while (!q.empty()) {
        path = q.front();
        q.pop();
        int last = path[path.size() - 1];
 
        if (last == n)
            routes.push_back(path);    
 
        for (int i = 0; i < adj[last].size(); i++) {
            if(find(path.begin(), path.end(), adj[last][i])==path.end())
            {
                vector<int> newpath(path);
                newpath.push_back(adj[last][i]);
                q.push(newpath);
            }
        }
    }	
}

int main()
{

	freopen("input1.txt", "r", stdin);freopen("output.txt", "w", stdout);

	int m;
	cin>>n>>m>>T>>c;
	
	for(int i=0;i<m;i++)
	{
		int a, b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	bfs(1);

	if(routes.size()<=1){
		cout<<-1;
		return 0;
	}

	sort(routes.begin(),routes.end());
	int shortest_route_size= routes[0].size();
	int k=1;
	while(routes[k].size()==shortest_route_size && k<routes.size())
	{
		k++;
	}
	if(k<routes.size())
	{
		vector<int> x= routes[k];
		int tim=0, l=x.size();
		
		for(int i=0;i<l;i++)
		{
			tim+=c;
			if(i==(l-1))
				break;
			else
			{
				int temp= tim/T;
				if(temp&1)
					tim=(temp+1)*T;
			}
		}

		cout<<tim<<endl;
	}
	else cout<<-1<<endl;
}
