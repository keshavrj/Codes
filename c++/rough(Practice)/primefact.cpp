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
using namespace std;
vi a(100001,-1);
void sieve()
{
    a[0]=0;
a[1]=1;

int    maxx=100000;
    for(int i=2;i<=maxx;i++)
    {
        if(a[i]==-1)
        {
            for(int j=i;j<=maxx;j+=i)
                if(a[j]==-1)
                    a[j]=i;
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
sieve();

tc{
    int n;cin>>n;
while(n>1)
{
    cout<<a[n]<<"*";
n/=a[n];
}
cout<<"1"<<endl;
}

/*tc{
int n;
cin>>n;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
    {
        int cnt=0;
        while(n%i==0)
        {
            cnt++;
            n/=i;
        }
         cout<<"("<<i<<"^"<<cnt<<") ";
    }
}
if(n>1)
    cout<<"("<<n<<"^"<<1<<")";

cout<<endl;
}*/

    return 0;
}
