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
int arr[65][65];
void printmatrix(int n){
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;}
}
void transpose(int L)
{
    for(int i=1;i<=L;i++)
        for(int j=i+1;j<=L;j++)
        swap(arr[i][j] , arr[j][i]);

}

int main()
{
    fastio;
tc{
int n;cin>>n;
int cnt=0;
for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>arr[i][j];

for(int i=1;i<n;i++)
    if(arr[i][1]>arr[i+1][1])
        {transpose(i);
         cnt++;
        }

for(int i=n;i>=1;i--)
if(arr[i][1]!=(i-1)*n+1)
        transpose(i), cnt++;
//printmatrix(n);
cout<<cnt<<endl;

}



return 0;
}

