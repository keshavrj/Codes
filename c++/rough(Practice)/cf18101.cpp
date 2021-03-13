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
//    fastio;
tc
{
ll ans=0;
ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
if(x1==x2 || y1==y2)
    ans=abs(x1-x2)+abs(y1-y2);
else
    ans=2+abs(x1-x2)+abs(y1-y2);


cout<<ans<<endl;
}



return 0;
}

