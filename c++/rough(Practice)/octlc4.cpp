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
 //   fastio;
tc
{
int n,x,p,k;cin>>n>>x>>p>>k;
int arr[n];
for(auto &x:arr)cin>>x;
sort(arr,arr+n);
if(arr[p-1]==x)
{
    cout<<0<<endl;
    continue;
}
else if(k>=p && arr[p-1]>=x)
{
    ll cnt=0;
    for(int i=p-1;i>=0 || arr[i]<=x;i--)
    {
        if(arr[i]>x)
            cnt++;
    }
    cout<<cnt<<endl;
}
else if(k<=p && arr[p-1]<=x)
{
    ll cnt=0;
    for(int i=p-1;i<n || arr[i]>=x;i++)
    {
        if(arr[i]<x)
            cnt++;
    }
    cout<<cnt<<endl;
}
else
    cout<<-1<<endl;
}
return 0;
}


