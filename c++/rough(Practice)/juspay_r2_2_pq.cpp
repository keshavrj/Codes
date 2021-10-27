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
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
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