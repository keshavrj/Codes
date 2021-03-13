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
   
    fastio;

tc{
	int n;cin>>n;
	string s;
	cin>>s;
	int ans=0;
	int r=0,b=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='R')
			r++;
		else b++;
	}

if(n&1){
	if(r>b)
	{
		ans= (n+1)/2-b;
	}
	else ans= (n+1)/2-r;
}
else
{
	if(r>b)
	{
		ans= (n)/2-b;
	}
	else ans= (n)/2-r;
}

cout<<ans<<endl;
}
}