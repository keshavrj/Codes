#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
int main()
{
	fastio;

   // #ifndef ONLINE_JUDGE
   //  freopen("input1.txt","r", stdin);
   //  freopen("output.txt","w", stdout);
   // #endif
tc
{
ll n;cin>>n;
ll p = log(n)/log(2);
ll t=1<<p;
ll q= t-1;
for(int i=0;i<p;i++)
	n^=(1<<i);

cout<< (n*q) <<endl;
// cout<<p<<" "<<n<<" "<<q<<endl;
// cout<<(1<<k)<<endl;
// cout<<(7>>1)<<endl;
}
}