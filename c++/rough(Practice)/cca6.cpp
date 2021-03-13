#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vll vector<ll>
#define mod 1000000007
using namespace std;
int main()
{
fastio;
tc
{
    uint64_t n;cin>>n;
    uint64_t arr[n];
    for(auto &x:arr) cin>>x;

    uint64_t total=1<<n;
   total-=1;

    while(total)
   {
       uint64_t x=ceil(total/2.0);
       cout<<x%mod;
       total -= x;
       if(total)cout<<" ";
   }
   cout<<endl;

}
return 0;
}
