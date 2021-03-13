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
if(n==1){cout<<n<<endl;continue;}
if(n==3){cout<<2<<" "<<3<<" "<<1<<endl;continue;}
bitset<32> z(n);
int bits= z.count();
if(bits==1)
    cout<<-1<<endl;

else
{
    cout<<2<<" "<<3<<" "<<1<<" ";
    for(int i=4;i<=n;i++)
    {
      int  bit= __builtin_popcount(i);
        if(bit==1)
        {cout<<i+1<<" "<<i<<" ";
        i++;
        }
        else
            cout<<i<<" ";
    }
    cout<<endl;
}

}




return 0;
}
