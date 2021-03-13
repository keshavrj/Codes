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
    fastio
   ll n;cin>>n;
    vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];

        sort(v.begin(),v.end());

    ll ans=LLONG_MAX;
        ll c=1;
        while(pow(c,n-1)<=pow(10,10))
        {
                  c++;
        }

        c--;

for(int k=1;k<=c;k++)
{
        ll cnt=0;
        for(int i=0;i<n;i++)
            cnt+=abs(pow(k,i) - v[i]);
        ans=min(ans,cnt);
}

       cout<<ans<<"\n";


   return 0;
}





































/*    fastio;
ll n,cost=0,power=0;cin>>n;
ll a[n];
bool flag=1;
for(auto &x:a)
    {cin>>x;
    if(x!=1)flag=false;
    }
if(flag)
{
    cout<<0<<endl;
    return 0;
}
sort(a,a+n);
long sum=accumulate(a,a+n,0L);

cost=(long)(ceil(log2(sum)));

cout<<cost<<endl;

return 0;
}
*/
