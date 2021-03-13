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

ll pc,pr;cin>>pc>>pr;
double cnt1=0,cnt2=0;

    cnt2=ceil(pr/9.0);
    cnt1=ceil(pc/9.0);
if(cnt2<=cnt1)
    cout<<1<<" "<<cnt2<<endl;
else
    cout<<0<<" "<<cnt1<<endl;
}



return 0;
}


