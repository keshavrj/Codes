#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc int t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
using namespace std;
vi adj[100005];
int n, d , k ,col, dist[100005];
bool vis[100005]={0};

void bfs(int root, vector<vi> &parent)
{  
    queue<int> q;
    q.push(root);
    vis[root]=1;
    dist[root]=0;
    parent[root][0]=-1;
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        for(int child:adj[t])
        {
            if(!vis[child])
            {
                vis[child]=1;
                dist[child]= dist[t]+1;
                parent[child][0]= t;
                q.push(child);
            }
        }
    }

}

int lca(int a, int b, vector<vi> &parent)
{
    if(dist[a]>dist[b])
        swap(a,b);
    int d= dist[b]-dist[a];

    while(d>0)
    {
        int i= log2(d);
        b=parent[b][i];
        d-= (1<<i);
    }
    if(a==b)
        return a;

    // while(parent[a][0]!=parent[b][0])
    // {
    //     a= parent[a][0];
    //     b= parent[b][0];
    // }

    for(int i=col;i>=0;i--)
    {
        if(parent[a][i]!=-1 && ( parent[a][i]!=parent[b][i] ))
            {
                a= parent[a][i]; b=parent[b][i];
            }
    }

    return parent[a][0];

}


int main()
{


    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;

    // tc{

    //     int q; 

    //     cin>>n>>q;
        
    //     for(int i=0;i<=n;i++)
    //         {
    //             adj[i].clear();
    //             vis[i]=0;
    //             dist[i]=0;
    //         }

    //     for(int i=0;i<n-1;i++)
    //     {
    //         int a, b;
    //         cin>>a>>b;
    //         adj[a].pb(b);
    //         adj[b].pb(a);
    //     }
    //     col= ceil(log2((double)n));
    //     vector<vi> parent(n+1, vi(col+1, -1));


    //     bfs(1, parent);

    //     for(int j=1;j<=col;j++)
    //     {
    //         for(int i=1;i<=n;i++)
    //         {
    //             if(parent[i][j-1] != -1)
    //             {
    //                 int par= parent[i][j-1];
    //                 parent[i][j]= parent[par][j-1];
    //             }
    //         }   
    //     }

        //lca(2,4);
// }

    cout<<"ram";
}