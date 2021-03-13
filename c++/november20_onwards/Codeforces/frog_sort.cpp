#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;

void solve()
{
	int n,cnt=0;cin>>n;
	map<int,int> m;
	vi L(n+1);
	for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			m[x]=i;
		}
	for(int i=1;i<=n;i++)
		cin>>L[i];


	int steps=0;
	for(int i=2;i<=n;i++)
	{
		int x1=m[i-1] , x2= m[i];
		if(x2<=x1)
			steps=ceil((x1-x2+1)/(double)L[x2]);
		cnt+=steps;
		m[i]+=steps*L[x2];
	}
	cout<<cnt<<endl;

	
}



int main()
{
	fastio;

   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif
tc
{
	solve();
}
}