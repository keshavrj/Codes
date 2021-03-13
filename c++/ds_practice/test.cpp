#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
int main()
{
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w", stdout);
    fastio;    
tc{
int dp[100005]
int n, ans=0;cin>>n;
vi arr[n];
map<int,int> m;
for(int i=0;i<n;i++)
{
    int mp;cin>>mp;
    for(int j=0;j<mp;j++)
    {
        int x;cin>>x;
        arr[i].pb(x);
        m[abs(x)]+=1;
    }
}
for(auto x:m)
{
    if(x.second>1)
        ans++;
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<arr[i].size();j++)
    {
        int t=arr[i][j];
        if(m[abs(t)]==1)
        {

        }
    }
}




for(int i=0;i<n;i++)
{
    for(int j=0;j<arr[i].size();j++)
    {
        if(m[abs(arr[i][j])]>1)
        {
            if(arr[i][j]<0)
                ans+=j;
            else
                ans= ans+ arr[i].size()-1-j;
        }
        else
        {
            if(arr[i][j]>0)
            {
                int k=0;
                bool fl=0;
            for(k=j-1;k>=0;k--)
                {
                if(abs(arr[i][k])>=arr[i][j])
                    {fl=1;break;}
                if(arr[i][k]<0 && m[abs(arr[i][k])]==1)
                    ans++;
                }
             if(fl)
                ans+=(k+1);
            }
            else
            {
                int k=0;
                bool fl=0;
                for(k=j+1;k<arr[i].size();k++)
                {
                    if(abs(arr[i][k])>=abs(arr[i][j]))
                        {fl=1;break;}
                    if(arr[i][k]>0 && m[abs(arr[i][k])]==1)
                         ans++;
                }
                if(fl)
                    ans=ans+arr[i].size()-1-k;
            }

        }
    }
}
cout<<ans<<endl;
}

}