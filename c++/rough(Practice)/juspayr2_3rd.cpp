/* Coded by "keshav_bhaau"  */

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
map<int, vector<int>> adj;
bool vis[1000006] = {false};
vi ans;
unordered_set<int> sett, no_sett;
void dfs(int s, int d)
{
	for(auto i:adj[s])
	{
		if((sett.find(i)==sett.end()) && (no_sett.find(i)==no_sett.end()))
		{
				if(find(adj[i].begin(), adj[i].end(),d)!=adj[i].end())
				{
					ans.pb(i);
					sett.insert(i);
				}
				else{
					dfs(i, d);
					if(sett.find(i)==sett.end())
						no_sett.insert(i);
				}
		}
	}
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;

    int n;cin>>n;
    int arr[n];
    for(auto &x:arr)
        cin>>x;
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a].pb(b);
    }
    int src, dest;
    cin>>src>>dest;

    if(find(adj[src].begin(), adj[src].end(), dest)!=adj[src].end())
    	{ans.pb(src);
    	sett.insert(src);
    	}


    dfs(src, dest);
    sort(ans.begin(), ans.end());
    if(ans.empty())
    	cout<<-1;
    for(int i:ans)
    	cout<<i<<" ";
}