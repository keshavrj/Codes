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
ll z[1][2]={1,2};
ll a[2][2];
ll I[2][2];


void multiply(ll I[][2],ll a[][2],ll dim)
{
    ll res[dim+1][dim+1];
    For(0,dim,i)
    For(0,dim,j)
    {
        res[i][j]=0;
        For(0,dim,k)
            res[i][j] = (res[i][j]+I[i][k]*a[k][j])%mod;
    }

    For(0,dim,i)For(0,dim,j)I[i][j]=res[i][j];
}

void power(ll a[][2],ll n,ll dim)
{
    For(0,dim,i)
        For(0,dim,j)
        {if(i==j) I[i][j]=1;
        else I[i][j]=0;}

while(n)
 {
     if(n&1)    /// if odd;
         multiply(I,a,dim),n--;
         else{
     multiply(a,a,dim);
     n/=2;}
 }


    For(0,dim,i)For(0,dim,j)a[i][j]=I[i][j];
}

int main()
{
fastio;
tc{
ll n;cin>>n;
a[0][0]=0;
a[0][1]=1;
a[1][0]=1;
a[1][1]=1;

power(a,n-1,2);

    ll res[2][3];
    For(0,1,i)
    For(0,2,j)
    {
        res[i][j]=0;
        For(0,2,k)
            res[i][j] = (res[i][j]+z[i][k]*a[k][j])%mod;
    }
        cout<<res[0][0]<<endl;
}
return 0;
}
