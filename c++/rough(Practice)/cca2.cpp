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

ll n,k;cin>>n>>k;
ll arr[n+1]={0};
for(ll i=1;i<=n;i++)
    cin>>arr[i];
ll ans=INT_MAX;
bool flag=1;
for(ll i=1;i<=n;i++)
{
    if(k%arr[i]==0)
        ans=min(ans,k/arr[i]),flag=0;
}
if(!flag)
cout<<(int)(k/ans)<<endl;
else
    cout<<-1<<endl;




}



return 0;
}

