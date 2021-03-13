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
# define ui uint64_t
#define umap unordered_map
using namespace std;
ui pow4(ui n)
{
    return ((6 * n * n * n * n * n) + (15 * n * n * n * n) + (10 * n * n * n) - n) / 30;
}

int main()
{
//fastio;
int k;cin>>k;
tc
{
    ui n;cin>>n;
    ui sum;
    if(k==3)
        {
            ui zz= (n*(n+1))/2;
            sum= pow(zz,2);
        }
    if(k==4) sum= pow4(n);

   // cout<<"mid : "<<mid<<endl;

    int i=n;

   if(k==1)
    {
         bool arr[n+1]={false};
        sum = (n*(n+1))/2;
        ui val=sum/2;
        ui mid= val;
    while( i>0 && mid>0)
    {
        if(mid>=i)
        {
            arr[i]=1;
            mid-=i;
        }
        else
        {
            arr[mid]=1;
            break;
        }
        i--;
    }

ll ans=sum-2*val;

 cout<<abs(ans)<<endl;

    for(int x=1;x<=n;x++)
        cout<<arr[x];
    cout<<endl;
   }



   if(k==2)
    {
         bool arr[1000000]={false};
        sum = (n*(n+1)*(2*n+1))/6;
        ui val=sum/2;
        ui mid= val;
    while( i>0 && mid>0)
    {
        if(mid>=(i*i))
        {
            arr[i]=1;
            mid-=(i*i);
        }
        else
        {
            ll t= ceil(sqrt(mid));
            arr[t]=1;
            break;
        }
        i--;
    }

ll cnt=0;
for(int i=1;i<=n;i++)
    if(arr[i]==1)
        cnt+=(i*i);
ll ans=sum-2*cnt;

 cout<<abs(ans)<<endl;

    for(int x=1;x<=n;x++)
        cout<<arr[x];
    cout<<endl;
   }


}
return 0;
}

