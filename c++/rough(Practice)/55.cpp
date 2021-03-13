#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(ll xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
#define mod 1000000007
using namespace std;

unsigned long long power(unsigned long long y)
{
    unsigned long long x=2ULL,res = 1ULL;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
          res = ((res)%mod*(x%mod)) % mod;
        y = y>>1;
        x = ((x)%mod *(x)%mod) % mod;
    }
    return res%mod;
}

bool compare(const pair<ll, ll>&a, const pair<ll, ll>&b)
{
   return a.second<b.second;
}
int main()
{
fastio;
tc{
   unsigned ll n;cin>>n;
    unsigned ll arr[n];
for(auto &x:arr) cin>>x;


map<ll,ll> m;
vll paper;
vll ans(n+1,0);
unsigned long long total=power(n);
For(1,total+1,i)
{
    For(0,n,j)
    {
        int f= 1<<j;
        if(i&f)
        {
            m[arr[j]]++;
        }
    }
ll maxn = max_element(m.begin(), m.end(), compare)->first;
paper.pb(maxn);
m.clear();
}


for(auto &x:paper)
{
    (ans[x]++)%mod;
}


for(ll i=1;i<=n;i++)
    cout<<ans[i]<<" ";


cout<<endl;
}
return 0;
}


















