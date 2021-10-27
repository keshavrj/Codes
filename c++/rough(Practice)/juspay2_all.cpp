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




















#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

#define umap unordered_map
using namespace std;

// map<int,vector< pair < int , int > > > adj;
vector<pii> adj[100005];
bool u[1000006] = {false};
const int INF = 1700027500;

void solve2(int s, int dest, int n )
{
    priority_queue<pii, vector <pii> , greater<pii> > pq;
    vector<int> dist(n, INF);
    pq.push(make_pair(0, s));
    dist[s] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        for (auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second;
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    if(dist[dest]!=INF)
        cout<<dist[dest]<<endl;
    else cout<<-1<<endl;

}

// void solve(int s, int dest, int n) {
//    vector<int> d(n+1, INF),p(n+1,-1);
//    d[s] = 0;
//    for (int i = 0; i < n; i++) {
//     int v = -1;
//     for (int j = 0; j < n; j++){
//         if (!u[j] && (v == -1 || d[j] < d[v]))
//             v = j;
//     }

//     if (d[v] == INF)
//         break;

//     u[v] = true;
//     for(auto edge : adj[v]) {
//         int to = edge.first;
//         int len = edge.second;

//         if (d[v] + len < d[to]) {
//             d[to] = d[v] + len;
//             p[to] = v;
//         }
//     }
//     }
//     if(d[dest]!=INF)
//         cout<<d[dest]<<endl;
//     else cout<<-1<<endl;
// }

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
    #endif
    fastio;
    int n, size=-1;cin>>n;
    int arr[n];
    for(auto &x:arr)
    {
        cin>>x;
        size= max(size, x);
    }
    int m;cin>>m;
    for(int i=0;i<m;i++)
    {
        int a, b, w;
        cin>>a>>b>>w;
        adj[a].pb({b,w});
    }
    int src, dest;
    cin>>src>>dest;
    solve2(src,dest, size);
}




















/* Coded by "keshav_bhaau"  */

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
vi ans;
unordered_set<int> sett, vis_sett;
void dfs(int s, int d)
{
    for(auto i:adj[s])
    {
        if((sett.find(i)==sett.end()) && (vis_sett.find(i)==vis_sett.end()))
        {
                if(find(adj[i].begin(), adj[i].end(),d)!=adj[i].end())
                {
                    ans.pb(i);
                    sett.insert(i);
                }
                else{
                    dfs(i, d);
                    if(sett.find(i)==sett.end())
                        vis_sett.insert(i);
                }
        }
    }
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
    int src, dest;
    cin>>src>>dest;

    if(find(adj[src].begin(), adj[src].end(), dest)!=adj[src].end())
        {
            ans.pb(src);
            sett.insert(src);
        }


    dfs(src, dest);
    sort(ans.begin(), ans.end());
    

    if(ans.empty())
        cout<<-1<<endl;
    for(int i:ans)
        cout<<i<<" ";
}





