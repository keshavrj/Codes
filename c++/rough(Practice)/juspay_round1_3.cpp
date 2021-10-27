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
			else{
				int temp= tim/T;
				if(temp&1)
					tim=(temp+1)*T;
			}
		}

		cout<<tim<<endl;


	}
	else cout<<-1<<endl;
}
