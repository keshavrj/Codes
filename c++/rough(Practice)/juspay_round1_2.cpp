#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005], parent[1005];
bool vis[1005];

int dis[1005], tim[1005];
int n, T, c;

void find_paths(vector<vector<int> >& paths,
                vector<int>& path,
                int u)
{
    
    if (u == -1) {
        paths.push_back(path);
        return;
    }

    for (int par : parent[u])
    {
 		path.push_back(u);
 		find_paths(paths, path, par);
        path.pop_back();
    }
}


void bfs(int root)
{
	queue<int> q;
	parent[root].push_back(-1);
	q.push(root);
	
	dis[root]=0;
	vis[root]=1;
	
	while(!q.empty())
	{
		int t=q.front();
		q.pop();
		for(auto child : adj[t])
		{
			if(dis[child]>dis[t]+1)
			{
				dis[child]= dis[t]+1;
				q.push(child);
				parent[child].clear();
				parent[child].push_back(t);
			}
			else if(dis[child] == dis[t] + 1 )
				parent[child].push_back(t);
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
		int a, b;cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=0;i<=n;i++)
	{
			dis[i]= INT_MAX;
	}

 vector<vector<int>> paths;
    vector<int> path;
    // Function call to bfs
    bfs(1);
 
    // Function call to find_paths
    find_paths(paths, path, n);

// cout<<"dis: ";
// 	for(int i=1;i<=n;i++)
// 		cout<<dis[i]<<" ";
// 	cout<<endl;
// cout<<"parent: \n";
// for(int i=1;i<=n;i++)
// {
// 	for(int i:parent[i])
// 		cout<<i<<" ";
// 	cout<<endl;
// }
	int ans[n+1]= {0};
	
	for(auto i:paths)
	{
		for(auto x:i)

			ans[x]++;
	}
	for(int i =1;i<=n;i++)
		cout<<ans[i]<<" ";

}