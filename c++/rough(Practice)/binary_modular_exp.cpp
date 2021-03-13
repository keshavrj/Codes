#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
#define mod 1000000007
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);


tc{
ll a,n;cin>>a>>n;///find a^n;
 ll res=1;
 while(n)
 {
     if(n&1)    /// if odd;
     {
         res=((res)%mod*(a%mod))%mod;
         n--;
     }
     a=((a%mod)*(a%mod))%mod;
     n/=2;
 }
 cout<<res<<endl;
}
    return 0;
}
