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
    int arr[4];
for(auto &x:arr)
cin>>x;
bool flag=1;
int total=1<<4; //16
For(1,total,i)
{
    int sum=0;
    For(0,4,j)
    {
        int f= 1<<j;
        if((i&f)!=0)
            sum+=arr[j];
    }
    if(sum==0)
    {flag=0;
    break;
    }
}
if(flag==0)
cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;
}



return 0;
}

