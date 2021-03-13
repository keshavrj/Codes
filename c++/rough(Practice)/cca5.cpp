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
int main(){
fastio;
tc
{
int n,k;cin>>n>>k;
int arr[n],DP[n];
for(auto &i:arr) cin>>i;

DP[0]=k;
For(1,n,i)
{
    int t=0;
    DP[i]=(i+1)*k;
    int freq[101]={0};

    for(int j=i;j>=0;j--)
    {
    freq[arr[j]]++;

    if(freq[arr[j]]==2)t+=2;
    if(freq[arr[j]]>2)t++;

    if(j) DP[i]=min(DP[i] , DP[j-1]+k+t);
    else DP[i]=min(DP[i] , k+t);

    }
}
cout<<DP[n-1]<<endl;
}
return 0;
}
