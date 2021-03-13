#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll power(ll a,ll n)
{
    ll res=1ULL;
    while(n)
    {
        if(n&1)
        {
            res*=a;
            n--;
        }
a*=a;
            n/=2;
}
    return res;
}
int main()
{
    ll a,n;
    cin>>a;
    cin>>n;
    cout<<power(a,n)<<endl;
    cout<<(2<<2);
    return 0;
}
