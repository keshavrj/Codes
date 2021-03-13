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
#define mx 10005
using namespace std;

vll sum(mx);


int main()
{
//fastio;
//sum[0]=1;
for(uint64_t i=1;i<=10000;i++)
    sum[i]= i+sum[i-1];

for(int i=0;i<11;i++)cout<<sum[i]<<",";
cout<<endl;

 tc{
uint64_t n;cin>>n;
ll cnt=0;
bool swaped[n+1]={0};
if(sum[n]&1) cout<<0<<endl;


else
{
    uint64_t totsum= (n*(n+1))/2;
uint64_t val = totsum/2;
auto ub=upper_bound(sum.begin(),sum.begin()+n+1 , val);
uint64_t dif= *ub-val;
uint64_t bck=ub-sum.begin()-dif;
uint64_t pos= ub-sum.begin()-1;
if(sum[pos]==val)
    cnt+=(pos*(pos-1))/2 + ((n-pos)*(n-pos-1))/2;
//cout<<"dif= "<<dif<<endl<<"bck= "<<bck<<"ncr :- "<<(pos*(pos-1))/2 + ((n-pos)*(n-pos-1))/2<<endl;

for(auto i=ub-sum.begin();i<=n;i++)
{
    if((!swaped[i]))
    {
        cnt++;
        swaped[i]=1;
        swaped[i-bck]=1;
    }
}
//if(n&1)cout<<cnt-1<<endl;
cout<<cnt<<endl;
}

}return 0;
}
