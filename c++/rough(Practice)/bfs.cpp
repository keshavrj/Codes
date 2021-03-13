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
void bfs(int vtx, int a[][8])
{
    int n= sizeof(a[1]-1); // 1 based index;
    queue<int> q;
    bool visited[8]={0};
    cout<<vtx<<"->";
    visited[vtx]=1;
    q.push(vtx);
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        for(int v=1;v<=n;v++)
        {
            if(a[t][v]==1 && visited[v]==0 )
            {
                cout<<v<<"->";
                visited[v]=1;
                q.push(v);
            }
        }

    }
    cout<<endl;
}


void dfs(int start, int a[][8])
{
    int n=sizeof(a[1]-1);
   static bool visited[8]={0};

    if(visited[start]==0)
    {
        cout<<start<<"->";
        visited[start]=1;
    for(int i=1;i<=n;i++)
        if(a[start][i]==1 && visited[i]==0)
            dfs(i,a);
    }

}


int main()
{
    fastio;
 int a[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};

for(int i=1;i<8;i++)
 {
     cout<< "vertex:"<< i <<"-> ";
     dfs(i,a);
     cout<<flush<<endl;
 }
return 0;
}
