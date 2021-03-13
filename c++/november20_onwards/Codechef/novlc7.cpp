#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;

int gcd(int a, int b); 
int power(int x, int y, int m); 
int modinverse(int a, int m) 
{   int ans=0;
    int g = gcd(a, m); 
    if (g != 1) 
        cout <<"saaf";
    else
    { 
        ans= power(a, m - 2, m); 
    }
    return ans;
} 
int power(int x,  int y,  int m) 
{
    if(y==0) 
        return 1; 
    int p=power(x,y/2,m)%m; 
    p =(p*p)%m; 

    return (y%2==0)?p:(x*p)%m; 
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 












int32_t main()
{
    fastio;

   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif
tc
{
int n; cin>>n;
int a[n];
int min=INT_MAX;
for(int &x:a)
{
    cin>>x;
    if(x<min)
        min=x;
}
int p[n]= {0ULL}, ans[n]={0ULL};
int q[n]= {0ULL};
for(int i=0;i<n;i++)
    {
        p[i]=a[i]*(a[i]+1)/2;
        q[i]=a[i]+1;
        ans[i]=p[i]/q[i];
    }
    int z= accumulate(ans,ans+n, 0ULL)/n;
int inv= modinverse(n,998244353);

cout<<(z*inv)<<endl;





}
}