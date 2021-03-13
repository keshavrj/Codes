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
#define maxx 100
ll a[maxx][maxx]={0};
ll I[maxx][maxx]={0};


void multiply(ll I[][maxx],ll a[][maxx],ll dim)
{
    ll res[dim+1][dim+1];
    For(0,dim,i)
    For(0,dim,j)
    {
        res[i][j]=0;
        For(0,dim,k)
            res[i][j] = (res[i][j]+I[i][k]*a[k][j] )%mod;
    }

    For(0,dim,i)For(0,dim,j)I[i][j]=res[i][j];
}

void power(ll a[maxx][maxx],ll n,ll dim)
{
    For(0,dim,i)
        For(0,dim,j)
        {if(i==j) I[i][j]=1;
        else I[i][j]=0;}

   // For(0,n,i)
//        multiply(I,a,dim);
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
ll m,n;cin>>m>>n;
For(0,m,i)For(0,m,j)cin>>a[i][j];

power(a,n,m);


For(0,m,i)
{
    For(0,m,j)
        cout<<a[i][j]<<" ";
    cout<<endl;
}

}
return 0;
}
