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
   
    fastio;
     #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


tc{
string s;
cin>>s;
cout<<"Hash Value: "<<gethash(s)<<endl;
}
}