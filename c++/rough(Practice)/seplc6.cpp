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
ll power2(int n)
{
 ll res=1;
 ll a= 2;
 while(n)
 {
     if(n&1)    /// if odd;
     {
         res=((res)%mod*(a%mod))%mod;
         n--;
     }
     a=((a%mod)*(a%mod))%mod;
     n/=2;
 }
 return res;
}


int main()
{
    fastio;
tc{
bool flagsame=true;
int n;cin>>n;
int arr[n];
umap<int, int> m;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    m[arr[i]++];
}


}



return 0;
}


