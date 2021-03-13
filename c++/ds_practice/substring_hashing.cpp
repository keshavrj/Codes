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
#define mod 1000000007
using namespace std;
ll dp[100005];
ll inv[100005];

ll power(ll a, ll n)
{
    ll res=1;
    while(n)
    {
        if(n&1) res= (res*a)%mod;
        n>>=1;
        a= (a*a)%mod;
    }
return res;
}


void init(string s)
{
    ll pw=1;
    ll p= 29;
    inv[0]=1;
    for(auto i=1;i<=s.size();i++)
    {
        dp[i]= (dp[i-1]+ (s[i-1]-'a'+1)*pw)%mod;
        pw= (pw*p)%mod;
        inv[i]= power(pw, mod-2);
        //cout<<"inv= "<<inv[i]<<endl;
    }

}

ll get_sub_hash(ll L,ll R)
{
    return ((dp[R]-dp[L-1]+ mod)*inv[L-1])%mod;
}

ll gethash(string s)
{
    ll val=0;
    ll pw=1;
    ll p= 29; //prime value greater than character set
    // Ei=0,n-1(s[i]*pow(p,i))%mod;
    for(auto x:s)
    {
        val = (val + (x-'a'+1)*pw)%mod;
        pw = (pw*p)%mod; 
    }
    return val;

}


int main()
{
   // 1 based indexing;
    fastio;
     #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

string s;
cin>>s;
init(s);
tc{
int l,r;
cin>>l>>r;
cout<<"Hash Value: "<<get_sub_hash(l,r)<<endl;
}
}