#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
using namespace std;
vi adj[100005];
int Q[100005], mx, k , level[100005], parent[100005];
bool vis[100005];

void bfs(int root)
{
    queue<int> q;
    parent[root]=-1;
    level[root]=1;
    q.push(root);

    while(!q.empty())
    {
        int t= q.front();
        q.pop();
        for(int child:adj[t])
        {
            if(child!=parent[t])
            {
                q.push(child);
                parent[child]= t;
                level[child]= level[t]+1;
            }
        }
    }

}

string solve()
{

    while(mx!=-1)
    {
        vis[mx]=1;
        mx= parent[mx];

    }
    mx=0;
    for(int i=0;i<k;i++)
    {
        if(level[Q[i]]>level[mx] && (!vis[Q[i]]))
            mx= Q[i];
    }


    while(parent[mx]!=-1 && !vis[mx])
    {

        vis[mx]=1;
        mx= parent[mx];
    }
    
    int p=0;
    if(mx!=-1)
        p= level[mx];
    // cout<<p<<endl;
    for(int i=0;i<k;i++)
    {
        if(!vis[Q[i]] || level[Q[i]]<p)
            return "NO";
    }
    return "YES";

}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;

    tc
    {
        int n;cin>>n;
        for(int i=0;i<n-1;i++)
        {
            int a, b;cin>>a>>b;
            adj[a].pb(b);adj[b].pb(a);
        }

        bfs(1);


        int q; cin>>q;
        while(q--)
        {
            // int k;
            cin>>k;
            mx=0;
            for(int i=0;i<k;i++)
            {
                cin>>Q[i];
                vis[Q[i]]=0;

                if(level[Q[i]]>level[mx])
                {
                    mx = Q[i];
                }

            }

            cout<<solve()<<endl;

        }



    }
}

