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
vi m(100001,-1);

void factors()
{
m[0]=m[1]=1;
    For(2,100000,i)
    {
        if(m[i]==-1)
        {
            for(int j=i;j<100000;j+=i)
                if(m[j]==-1)
                    m[j]=i;
        }
    }
}
int main()
{
    ios_base :: sync_with_stdio(false);
    factors();

tc{int n;cin>>n;
while(n>1)
{
    cout<<m[n]<<"*";
    n/=m[n];
}
cout<<endl;
}



    return 0;
}

