#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long 
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
int32_t main()
{
	fastio;

freopen("input1.txt","r",stdin);
freopen("output1.txt","w",stdout);
int tc{
int n,m;cin>>n>>m;
vi v[n];
for(int i=0;i<n;i++)
{
	int mn= INT_MAX, minp = -1;
	for(int j=0;j<m;j++)
	{
		int x;cin>>x;
		v[i].pb(x);
		if(x<mn)
		{
			mn=x;
			minp=j;
		}
	}

}

for(int i=0;i<min(n,m);i++)
{
	int mn= INT_MAX, minp = -1;
	for(int j=0;j<min(m,n);j++)
	{
		if(v[i][j]<mn)
		{
			mn=v[i][j];
			minp=j;
		}
	}
	swap(v[i][i],v[i][minp]);

	 
}
for(int i=0;i<n;i++)
{
	for(auto x:v[i])
		cout<<x<<" ";
	cout<<endl;
}


}

}