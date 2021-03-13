
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long power(long long  A, long long n)
{
    long long result=1;
    while(n)
    {
        if(n&1)
        {
            result=((result)%mod*(A%mod))%mod;
            n--;
        }
        A=((A%mod)*(A%mod))%mod;
        n/=2;
    }
    return result;
}
int main()
{
    long long A,n;
    cin>>A>>n;
    long long ans = power(A,n);
    cout<<ans<<endl;
    return 0;
}
