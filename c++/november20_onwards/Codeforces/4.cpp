#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
void solve()
{
ll a, b;cin>>a>>b;
if(a==b || b==1)
{
	cout<<"NO"<<endl;return;

}
ll x= a*b ;

cout<<"YES\n"<<a<<" "<<x<<" "<<x+a<<endl;

}
int32_t main()
{
	fastio;
  #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
  #endif
tc{
	solve();
}

}