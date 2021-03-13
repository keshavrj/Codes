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
    int cnt=0;
    int arr[n];for(auto &x:arr)cin>>x;
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
        {
            if(arr[i]&arr[j]==arr[i])
                cnt++;
        }

}

    cout<<cnt<<endl;

}



return 0;
}
