#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
 ll modmul(ll a, ll b, ll mod)
 {
 	ll ans=0, y=a%mod;
 	while(b>0)
 	{
 		if(b&(1LL))
 			ans= (ans+y)%mod;
 		y= (y*2LL)%mod;
 		b>>=1;
 	}
	return ans%mod;
 }

ll binpow(ll a , ll n , ll mod)
{
	ll res = 1;
 
	while(n)
	{
		if(n & 1)
		res = modmul(res , a , mod);
 
		n >>= 1;
		a = modmul(a , a , mod);
	}
 
	return res % mod;
}
bool isprime(ll n , int iter=5)
{
	if(n<=4)
		return n==2 || n==3 ;
	 for(int i=1;i<=iter;i++)
	 {
	 	int a= 2+ rand()%(n-3) ; // 2=< a <=n-2;
	 	if(binpow(a,n-1,n)!=1)
	 		return false;
	 }
	 return true;
}


int main()
{
     
   freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
 	int t;cin>>t;while(t--)
 	{
 		ll n;cin>>n;
 	    // uint128_t x;cin>>x;
 		if(isprime(n))
 			cout<<"YES"<<endl;
 		else cout<<"NO"<<endl;
 	}
 }