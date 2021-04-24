#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 ll modmul(ll a, ll b, ll mod)
 {
 	ll ans=0, y=a%mod;
 	while(b>0)
 	{
 		if(b&(1LL))
 			ans= (ans+y)%mod;
 		y= (y*2LL)%mod;
 		b>>=1LL;
 	}
	return ans%mod;
 }





int main()
{
     
   freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
 	ll a,b;cin>>a>>b;
 	ll res= modmul(a,b,1000000007);
	cout<<res<<endl;
 }