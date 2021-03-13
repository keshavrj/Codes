#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    fastio;
int n,m,k,cnt=0;
cin>>n>>m>>k;
vi arr[n];
for(int i=0;i<n;i++)
{
	for(int j=0;j<=k;j++)
	{
		int x;cin>>x;
		arr[i].pb(x);
	}
}
for(int i=0;i<n;i++)
{
	if(arr[i][k]<=10)
	{
		int sum=accumulate(arr[i].begin(), arr[i].end()-1, 0);
		if(sum>=m)
			cnt++;
	}
}
cout<<cnt<<endl;

}