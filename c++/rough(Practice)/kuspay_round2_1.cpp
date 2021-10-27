#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
map<int, vector<int>> adj;
bool vis[1000006] = {false};

void bfs(int src, int dest)
{
    if(src==dest)
    {
        cout<<1<<endl;
        return;
    }

    queue<int> q;
    q.push(src);
    vis[src]=true;
    
    while(!q.empty())
    {
        int node= q.front();
        q.pop();
        for(auto child : adj[node])
        {
            if(child==dest)
            {
                cout<<1<<endl;
                return;
            }
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
            }

        }
    }
    cout<<0<<endl;

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;

    int n;cin>>n;
    int arr[n];
    for(auto &x:arr)
        cin>>x;
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a].pb(b);
    }
    // for(auto i:adj)
    // {
    //     cout<<i.first<<": ";
    //     for(auto x:i.second)
    //         cout<<x<<"->";
    //     cout<<endl;
    // }

    int src, dest;
    cin>>src>>dest;

    bfs(src, dest);
}