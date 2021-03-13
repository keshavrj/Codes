#include <bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int n;
ll arr[1005];
ll res1[1005][1005];
ll res2[1005][1005];
void solve()
{
for(ll i=1;i<=n;i++)
    {
        ll mx=arr[i];
        res1[i][i]=1;
        res2[i][i]=1;
        for(ll j=i+1;j<=n;j++)
        {
            if(arr[j]>mx)
            {
                res1[i][j]=res1[i][j-1]+1;
                mx=arr[j];
            }
            else
                res1[i][j]=res1[i][j-1];
        }
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=i+1;j<=n;j++)
        {
            ll mx=max(res2[i][j-1],res2[i+1][j]);
            res2[i][j]=max(mx,res1[i][j]);
        }
    }


}

int32_t main() 
{
    fastio;
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output1.txt","w", stdout);
   #endif

   
    int q,s;
    cin>>n>>q>>s;
    for(int i=1;i<=n;i++)cin>>arr[i];

    int last=0;
    solve();
    
for(int i=1;i<=n;i++)
    {for(int j=1;j<=n;j++)
        cout<<res1[i][j]<<" ";
        cout<<endl;}




while(q--)
{
    int l,r;
    cin>>l>>r;
    int L= (l + s*last-1)%n+1;
    int R= (r + s*last-1)%n+1;
    if(L>R)swap(L,R);
    //cout<<"L= "<<L<<" R= "<<R<<endl;
    cout<<res2[L][R]<<endl;
    last= res2[L][R];

}
}

