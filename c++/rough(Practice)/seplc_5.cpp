#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
tc{
 ll n, ans=0;
 cin>>n;
 vll tot;
 ll a;
 for(int i=1;i<=20;i++)
 {
     cout<<1<<" "<<(1UL<<i)<<endl;
     cin>>a;
     tot.pb(a);
 }
 reverse(tot.begin(), tot.end());
 ll to = tot[0]- n*(1UL<<20);
 for(ll i=1;i<tot.size();i++)
     if(tot[i]>= to)
         tot[i]= ((n-(tot[i]- to)/(1UL<<(tot.size()-i)))/2);

for(ll i=1;i<tot.size();i++)
{
    if(tot[i]&1)
        ans+=1UL<<(tot.size()-1);
    if(to%2!=0)
        ans++;
    cout<<2<<" "<<ans<<endl;
    ll res;cin>>res;
    if(res==-1)return -1;
    cout<<endl;
}
}
return 0;
}
