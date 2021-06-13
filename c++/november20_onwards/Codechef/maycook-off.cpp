#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
#include<iomanip>
using namespace std;
int arr[1002][1002];

int maxPathValue(int n, int m, int x[], int y[], string s) {
    vector<int> adj[n + 1];
    vector<int> indegree(n + 1, 0);
    
    for (int i=0; i<m; i++) {
        adj[x[i]].push_back(y[i]);
        indegree[y[i]]++;
    }
       
    queue<int> q;
    vector<vector<int>> dp(n + 1, vector<int>(26, 0));
    

    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    
    int popCounts = 0;
    int ans = 0;

    while (q.empty() == false) {
        int curr = q.front();
        q.pop();
        popCounts++;
        dp[curr][s[curr - 1] - 'a']++;
        ans = max(ans, dp[curr][s[curr - 1] - 'a']);
        
        for (int i : adj[curr])
        {
            for (int j = 0; j < 26; j++)
            {
                dp[i][j] = max(dp[i][j], dp[curr][j]);
            }
            indegree[i]--;
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        if (popCounts == n){
            break;
        }
    }

    if (q.empty() == false || popCounts < n){
        return -1;
    }

    return ans;
}








int main()
{
	fastio;
   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output.txt","w", stdout);
   #endif
    // int x=10, y=100%90;
    // if(x!=y);
    // printf("x=%d y=%d ", y , x);
    // for(int i = 1;  i <= 1000;  i++)
    // {
    //     arr[i][1] = i * (i+1)/2;
    //     for(int j = 2;  j <= 1000;  j++)
    //     {
    //         arr[i][j] = arr[i][j-1] + (j-1)+ (i-1);
    //     }
    // }
    // cout<<"what oup \\n do \'you\' expect";
// tc
// {
// int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
// int ans=0;
// for(int i=x1;i<=x2;i++){
//     ans+=arr[i][y1];
//     // cout<<arr[i][y1]<<"->";
// }
// for(int i=y1+1;i<=y2;i++){
//     ans+=arr[x2][i];
//     // cout<<arr[x2][i]<<"->";

// }

// cout<<ans<<endl;
int n=12;
cin>>hex>>n;
cout<<setprecision(2)<<n;

// stack<int> s;
// s.push(15);
// s.pop();
//  *ppp=NULL;
// cout<<sizeof(ppp)<<endl;

}