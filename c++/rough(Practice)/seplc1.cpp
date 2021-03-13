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
set<int> s;
vi arr;

for(int i=0;i<n;i++)
{
    int x;cin>>x;
 s.insert(x);
}
for(auto i=s.begin();i!=s.end();i++)
arr.pb(*i);
int cnt=0;
if(arr[arr.size()-1]==0)
{
    cout<<0<<endl;
    continue;
}

for(int i=1;i<arr.size();i++)
{
    int H=arr[0];
    int mx=arr[arr.size()-1];
    if(arr[i]>H && arr[i]<mx) H=arr[i];
    arr[i]-=(mx-H);
    cnt++;
}
if(arr[0]!=0)cnt++;
cout<<cnt<<endl;
}
return 0;
}
