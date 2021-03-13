#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define p 998244353
using namespace std;
int factorial[100008];
int power(int a, int n)
{

    int res=1;
    while(n)
    {
    if(n&1)
        {res = (res*1LL*a)%p,n--;}
    else
    {
       a=(a*1LL*a)%p;
      n>>=1;
    }
}

return res;

}

ll nCr(ll n, ll r)
{

if(r>n)  return 0;
ll ans = factorial[n];
ans=(ans * power( factorial[r] , p-2 ) ) % p; ///modulo inverse a/b=a*(b^-1);
ans=(ans * power( factorial[n-r] , p-2) ) % p;
return ans % p;
}

int main()
{
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w", stdout);
    fastio;
factorial[0]=factorial[1]=1;
for(int i=2;i<=100000;i++)
    factorial[i] = (factorial[i-1] * 1LL* i) % p;
ll n,r;
tc{
/* nCr=(n!%p)/(r!%p * (n-r)!%p); >> this is the formula to calculate binomial coefficient   */
    cin>>n>>r;                      cout<<nCr(n,r)<<endl;
}
return 0;
}
