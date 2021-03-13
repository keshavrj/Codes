#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
ll p,q,r,s,sum=0;
cin>>p>>q>>r>>s;
ll n=max(max(p,q),max(r,s));
ll a[n+1][n+1];
vector<pair< ll,ll > > vect;
for(ll i=p;i<=q;i++)
    for(ll j=r;j<=s;j++)
    {
        vect.push_back(make_pair(i,j));
    }

for(ll i=0;i<=n;i++)
    for(ll j=0;j<=n;j++)
{
    if(i==0 || j==0)
        a[i][j]=0;
    else if(i==1 || j==1)
        a[i][j]=max(i,j);
    else if(i==j)
    {
        a[i][j]=1;
    }
    else
    {
        int k=min(i,j);
        a[j][i]=a[k][k]+a[abs(i-j)][k];
        a[i][j]=a[j][i];
    }

}

for(auto &x:vect)
sum+=a[x.first][x.second];

cout<<sum;
    return 0;
}
