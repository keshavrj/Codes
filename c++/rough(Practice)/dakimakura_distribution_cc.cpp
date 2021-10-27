#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;
    tc
    {
        int n, x;cin>>n>>x;
        ll arr[n], t[n-1];
        for(auto &x:arr)
            cin>>x;
        for(auto &x:t)
            cin>>x;

        
        int i=0, j=n-1;
        while(arr[i]==0 && i<n)i++;
        while(arr[j]==0 && j>=0)j--;
        
        queue<ll> q;
        for(int x=j;x>=i;x--)
            if(arr[x]!=0)
                q.push(arr[x]);

        ll time_sum[j-i+1]={0};
        for(int x= j-1;x>=i;x--)
            time_sum[x] = time_sum[x+1]+t[x];

        unordered_map<ll,ll> m;
        for(int x=i;x<=j;x++)
            if(arr[x])
                m[arr[x]]= time_sum[x];

        ll ans=q.front();
        q.pop();
        while(!q.empty())
        {
            ll curr= q.front();
            q.pop();
            if(m[curr]-ans>=0)
                ans+= (m[curr]-ans);
            ans+= curr;
        }
        cout<<ans<<endl;
    }
}