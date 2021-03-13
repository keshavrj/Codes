#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll  long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vvi vector<vi>
#define umap unordered_map
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
#endif
tc{
    int n,ans=0;
    cin>>n;
 for(auto i=1;i<=n;i++)
 	cout<<"hello\n", ans+=i;
 
cout<<ans<<endl;
}
return 0;
}

