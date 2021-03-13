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
int n,k,l;cin>>n>>k>>l;
if(k*l< n)
    {cout<<-1<<endl;
    continue;}
if(k==1 && n>1)
{
    cout<<-1<<endl;
    continue;
}

    int x=1;
for(int i=1;i<=n;i++)
{
    if(x<=k){cout<<x<<" ";
 x++;}
else
        {x=1;
        cout<<x<<" ";
        x++;
        }

}
cout<<endl;


}



return 0;
}

