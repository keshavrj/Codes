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
int n;
int arr[65][65];
int swp(int arr[65][65])
{
    int cnt=0,L=1;
    for(int i=1;i<=n;i++){
            L=1;
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]< (i-1)*n+1 ||  arr[i][j]>(i-1)*n+n   )
            {
            for(int s=2;s<=L;s++){
                for(int t=2;t<=L;t++)
                swap(arr[s][t],arr[t][s]);}
            cnt++;
            }
            else L++;
        }}
return cnt;
}




int main()
{
    fastio;
tc{
for(auto x:arr)
    x=0;
cin>>n;
for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    cin>>arr[i][j];

cout<<swp(arr)<<endl;

}



return 0;
}
