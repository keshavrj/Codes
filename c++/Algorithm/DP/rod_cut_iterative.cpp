// this question is almost similar to unbounded knapsack.

#include<bits/stdc++.h>
using namespace std;
// int dp[1001][1001];
int cutRod(int wt[] ,int len[],int n, int max_len)
{
	if(n<=0)return 0;
	int dp[n+1][max_len+1]; // n is length of len array, max_len is max. length
	memset(dp,0,sizeof dp);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=max_len;j++)
			if(len[i-1]<=j)
				dp[i][j]= max(wt[i-1]+dp[i][j-len[i-1]], dp[i-1][j]);
			else dp[i][j]= dp[i-1][j];

return dp[n][max_len];
}

int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);
	// memset(dp,-1,sizeof dp);
	int price[] = { 1,5, 8, 9, 10, 17, 17, 20 };
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++) {
        length[i] = i + 1;
    }
    int Max_len = n;
 
    // Function Call
    cout << "Maxmum obtained value  is "
         << cutRod(price, length, n, Max_len) << endl;

}