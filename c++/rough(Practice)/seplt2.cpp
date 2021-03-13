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
    bool flag=1;
    int n;
    cin>>n;
    int b[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        if((i%b[i])!=0)
            flag=0;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}


return 0;
}

