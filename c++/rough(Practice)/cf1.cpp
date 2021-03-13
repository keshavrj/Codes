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
int n;cin>>n;
bool flag=true;
vector<string> s(n);
for(int i=0;i<n;i++)
    cin>>s[i];
umap<char,int> m;
for(int i=0;i<n;i++)
{
    string x=s[i];
    for(int j=0;j<x.size();j++)
        m[x[j]]++;
}
for(auto x:m)
{
   int z=x.second;
    if(  floor(z/(double)n)!=ceil(z/(double)n))
       {flag=false;
       break;
       }
}

if(flag)cout<<"YES"<<endl;
else cout<<"NO"<<endl;





}



return 0;
}

