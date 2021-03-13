#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
int main()
{
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w", stdout);
   tc{
    ll w,h,n;
    cin>>w>>h>>n;
    if(n==1)
    {
        cout<<"YES"<<endl;
        continue;
    }
    if((w*h)%2==1)
    {
        cout<<"NO"<<endl;
        continue;
    }
    ll cnt=1;
    
    if(!(w&1))
    {
        while((w%2)!=1 && w>0)
        {
            w/=2;
            cnt*=2;
        }
    }
    if(!(h&1))
      {
        while((h%2)!=1 && h>0)
        {
            h/=2;
            cnt*=2;
        }
      }
    if(cnt>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
   }
}