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
    int s,n;cin>>s>>n;
    int ans=0;
    if(s&1)ans+=1;
    while(s>1 && n)
    {
        ans+=(s/n);
        s=s%n;
        if(s&1) n=s-1;

    }
    cout<<ans<<endl;
}
return 0;
}

