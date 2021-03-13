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
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    fastio;
tc{
ll n,sum=0;
cin>>n;
ll arr[n];
for(auto &x:arr)
{
	cin>>x;
	sum+=x;
}
if(!(sum&1))
cout<<'1'<<endl;
else cout<<'2'<<endl;

}
}