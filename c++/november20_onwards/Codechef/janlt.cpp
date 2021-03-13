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


ll lcm(ll a, ll b)
{
    ll tt= __gcd(a, b);
    return (a / tt) * b;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    fastio;
tc{

	ll n,k;cin>>n>>k;
	ll arr[n], mx=-1;
	map<ll,ll> m;
	string ans="YES";
	for(auto &x:arr)
	{
		cin>>x;
		m[x]++;
		mx=max(mx,x);
	}
	for(int i=0;i<n;i++)
	{
		if((arr[i]%k)!=0)
		{
		    bool flag=0;
			// ll temp= ((arr[i]/k) + 1)*k;
			// ll zz= temp-arr[i];
			// if(m[zz]==0)
			ll ss= lcm(arr[i],k);
			ll ssa = abs(ss-arr[i]);
			ll ssb= abs(ss-k);
			if(m[ssa]!=0 || m[ssb]!=0)continue;
			for(int j=0;j<=mx;)
			{
			    ll x= (arr[i]/k + 1)*k;
			    ll xx= abs(x-arr[i]);
			    if(m[xx])
			        {
			            flag=1;
			            break;
			        }
			     j=x+k;
			}
			if(!flag){
			if(m[ssa]==0 && m[ssb]==0)
			{
				ans="NO";
				break;
			}}
		}
	}
	cout<<ans<<endl;

}
}