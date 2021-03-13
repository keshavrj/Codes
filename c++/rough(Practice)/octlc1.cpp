#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
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
ll n,i=0,k,sum=0ll;
cin>>n>>k;
ll arr[n+1];
ll carry[n+1]={0};
bool flag=1;
ll ans;
for(i=1;i<=n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
    carry[i]=carry[i-1]+arr[i]-k;
}
for(int i=1;i<=n;i++)
    if(carry[i]<0)
    {
        cout<<i<<endl;
        flag=0;
        break;
    }

if(flag)
{
    ans=sum/k+1;
    cout<<ans<<endl;
}

}

return 0;
}

