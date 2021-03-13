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
int v[7];
int main()
{
    fastio;
tc{
int n;cin>>n;
vi infcnt(6,1);
bool flag=true;
For(1,n+1,i)
{
    cin>>v[i];
    if(v[i]>0)flag=false;
}

if(flag  || n==1)
    { cout<<1<<" "<<1<<endl;   continue;}

int wc=1,bc=1;
for(int t=1;t<=50;t++)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((i+v[i]*t)== (j+v[j]*t))
            {
                wc++;
                infcnt[i]++;
            }
        }
    }


    for(int i=n;i>1;i--)
    {
        for(int j=i-1;j>=1;j--)
        {
            if((i+v[i]*t)== (j+v[j]*t))
            {
                //wc++;
                infcnt[i]++;
            }
        }
    }


    //if(wc==n) break;
}
//if(wc!=1) wc= min(n,wc-1);
for(int i: infcnt)cout<<i<<",";cout<<endl;
/*
int cc=count(infcnt.begin()+1 , infcnt.begin()+n  , 1);
if(cc==0)
    bc=n;
else bc=1;*/

bc=*min_element(infcnt.begin()+1, infcnt.begin()+n+1);
wc=*max_element(infcnt.begin()+1, infcnt.begin()+n+1);

cout<<bc<<" "<<wc<<endl;





}
return 0;
}
