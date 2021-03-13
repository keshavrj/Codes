#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
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

   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif
tc
{
int n, c0,c1,h, ones=0 , zeroes=0;
cin>>n>>c0>>c1>>h;
string s;
cin>>s;
for(auto x:s)
{
	if(x=='1')
		ones++;
	else if(x=='0')
		zeroes++;
} 
if(c0==c1)
{
	cout<<c0*n<<endl;
	continue;
}

else if(c0<c1)
{
	int ans = min( (n*c0 + h*ones), (zeroes*c0 + ones*c1));
	cout<<ans<<endl;

}
else
{
	int ans= min( (n*c1 + h*zeroes), (zeroes*c0 + ones*c1));
	cout<<ans<<endl;
}

}
}