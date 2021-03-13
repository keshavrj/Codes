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
    tc
    {
        string ans="NO";
        int n,k,x,y;cin>>n>>k>>x>>y;
        bool visited[n]={0};

            int pos=x;
            for(int i=pos;;i=(i+k)%n)
            {
             if(!visited[i])
             {
                 visited[i]=1;
                 if(visited[y]==1)
                 {
                     ans="YES";
                     break;
                 }
             }
             else break;
            }
            cout<<ans<<endl;

    }
return 0;
}

