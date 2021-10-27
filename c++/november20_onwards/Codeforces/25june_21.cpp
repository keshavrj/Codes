#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
using namespace std;


void solve()
{
    int n;cin>>n;
    ll a[n+1]={0};
    ll cnt=0;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
    {
      for(int j= a[i]-i;j<=n;j+=a[i])
      {
          if(j>=0 && i<j)
              if(a[i]*a[j]==i+j)
                cnt++;  
      }
    }
    
    cout<<cnt<<endl;


}


int32_t main()
{

    freopen("input1.txt","r", stdin);
    freopen("output.txt","w", stdout);
    // 
  // tc
  //   solve();
int *p, a=10;
p=&a;
++*p;
printf("%d,%d",*p, a);

}