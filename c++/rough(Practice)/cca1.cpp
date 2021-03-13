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
tc
{int h,p;cin>>h>>p;
while(h>0 && p>0)
{  h-=p;
    if(h<=0){cout<<1<<endl;break;}
    p/=2;
    if(p==0)cout<<0<<endl;
}}
    return 0;
}
