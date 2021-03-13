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
   
    fastio;
     #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

tc{
	int n,m;cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];


tc{
int x,y,v;
cin>>x>>y>>v;
x--;y--;
arr[x][y]=v;

// for(int i=0;i<n;i++)
// {
// 	for(int j=i;j<n && j<m; j++)
// 	{
// 		arr[j][j]
// 	}
// }


for (int slice = 0; slice < 2 * n - 1; ++slice) {
        printf("Slice %d: ", slice);
        int z = (slice < n) ? 0 : slice - n + 1;
        for (int j = slice - z;j>=z; j--) {
            printf("%d ", arr[j][slice - j]);
        }
        printf("\n");
    }

cout<<endl<<endl;




}


}

}