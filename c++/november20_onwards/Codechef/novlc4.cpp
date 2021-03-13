#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;
#define int long  long int
#define mod	4294967296
vector<int> dp[100005] ,level(100005), vis(100005), w(100005);
vector<int> path[100005];
int n;
void bfs(int node)
{
    queue<pair<int, int> > q;
    q.push({node, -1});
    vis[node]=true;

    while (!q.empty())
    {
        pair<int, int> p = q.front();q.pop();vis[p.first] = true;
        for (int child : dp[p.first])
        {
            if (!vis[child])
            {
                q.push({child,p.first});
                path[child]=path[p.first];
                path[child].push_back(p.first);
            }
        }
    }
}

void solve(int node, vector<int> &ans)
{
    vector<int>temp= path[node];
    for (int k : temp) {
        ans.push_back(w[k]);
    }
    ans.push_back(w[node]);
}

int32_t main() 
{

fastio;

   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif


  vector<int> f1, f2;
	int q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
	    cin>>w[i];
	}

	for(int i=0;i<n-1;i++)
	{
	    int x,y;
	    cin>>x>>y;
	    dp[x].push_back(y);
	    dp[y].push_back(x);
	}
  bfs(1);
  while(q--)
	{
    
       int u,v;
       cin>>u>>v;
       solve(u,f1);
	     solve(v,f2);
      
       int ans=0;

      for(int i=0;i<f1.size();i++)
          ans= ( (ans)%mod + (f1[i]*f2[i])%mod ) %mod;
      cout<<ans<<endl;

      f1.clear();
      f2.clear();

}
}