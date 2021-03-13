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
    int mn= INT_MAX;
int n,k;cin>>n>>k;
int a[n];
for(int &i:a)
{
cin>>i;
}
bool flag=1;
int ans=0;
sort(a,a+n);
mn=a[0];
for(int i=1;i<n;i++)
{
        ans+=((k-a[i])/mn);
}
  cout<<ans<<endl;

}



return 0;
}

