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
# define ui uint64_t
#define umap unordered_map
using namespace std;
int main()
{
//fastio;
tc
{
    ui n;cin>>n;
    ui sum = (n*(n+1))/2;
    if(sum&1) cout<<0<<endl;
else
{
    ui val=sum/2;
    ui pos= (sqrt(1+8*val) - 1)/2;
    ui pos_sum= (pos*(pos+1))/2;
    ui x= n-pos;
    if(pos_sum==val)
        cout<<x + (pos*(pos-1))/2 + (x*(x-1))/2  <<endl;
    else cout<<x<<endl;
}

}return 0;
}

