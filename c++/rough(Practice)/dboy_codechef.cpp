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
using namespace std;
int main()
{
    fastio;
tc{
int n,k;cin>>n>>k;
int a[n];
int xr[n];
int ans = INT_MIN;
for(auto i=0;i<n;i++)
    cin>>a[i];
xr[0]=a[0];

for(int i=1;i<n;i++)
    xr[i]=a[i]^xr[i-1];

for(int i=0;i<n;i++)
{
int p=xr[n-1]^xr[i];
ans=max(ans,k^p);
}

cout<<ans<<endl;
}
return 0;
}
