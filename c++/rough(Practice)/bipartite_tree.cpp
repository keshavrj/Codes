#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
using namespace std;

		vi adj[2005];
		bool vis[2005] = {false};
		bool col[2005]={0};


bool dfs(int node, int c){

	vis[node] = true;
	col[node] = c;

	for(auto child : adj[node]){
		if(!vis[child]){
			if(!dfs(child, c^1))
				return false;
		}
		else if (col[child] == col[node])
			return false;
	}
	return true;
}

int main() {
fastio;
	int t, n, e, a, b;
	cin >> t;
	for(int i=1; i<=t; i++){
		cin >> n >> e;
for(int i=1;i<=n;i++)adj[i].clear(), vis[i]=0;


		while(e--){
			cin >> a >> b;
			adj[a].pb(b);
			adj[b].pb(a);
		}

		bool flag = true;
		for(int i=1; i<=n; i++){
			if(!vis[i]){
				bool res = dfs(i, 1);
				if(res == false)
					flag = false;
			}
		}
		cout << "Scenario #" << i << ":" << endl;
		if(flag)
			 cout << "No suspicious bugs found!\n";
		else
			cout <<"Suspicious bugs found!\n";
	}
	return 0;
}
