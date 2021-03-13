#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
#define mod 1000000007
using namespace std;
ll modexp(ll a, ll b, ll d)
{
    ll res=1;
    while(b)
    {
        if(b&1) {
        res=((res%d)*(a%d))%d;
        b--;}
        else
        {
            a=((a%d)*(a%d))%d;
            b/=2;
        }
    }
    return res;
}
ll gcd(ll a,ll b,ll n)
{
    if(a==b)
    return (modexp(a,n,mod)+modexp(b,n,mod))%mod;
    ll ans=1;
    ll num=a-b;
    for(ll i=1;i*i<=num;i++)
    {
        if(num%i==0)
        {
            ll t=(modexp(a,n,i)+modexp(b,n,i))%i;
            if(!t) ans=max(ans,i);

            t=(modexp(a,n,n/i)+modexp(b,n,n/i))%(n/i);
            if(!t)ans=max(ans,n/i);
        }
    }
    return ans%mod;
}
int main()
{
fastio;
 ll A,B,N;
tc
{
   cin>>A>>B>>N;
    cout<<gcd(A,B,N)<<endl;
}
return 0;
}

