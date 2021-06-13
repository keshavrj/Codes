#include<bits/stdc++.h>
using namespace std;
int minCoins(int arr[], int n, int target)
{
	int dp[n+1][target+1];
	
	for(int i=0;i<=target;i++)
		dp[0][i]=INT_MAX-1;

	for(int i=1;i<=n;i++)
		dp[i][0]=0;
	
	for(int j=1;j<=target;j++)
		if(j%arr[0]==0)	
			dp[1][j]=j/arr[0];
		else dp[1][j]= INT_MAX-1;



	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=target;j++)
		{
			if(arr[i-1]<=j)
				dp[i][j]= min(1+dp[i][j-arr[i-1]], dp[i-1][j]);
			else dp[i][j]= dp[i-1][j];
		}
	}
	if(dp[n][target]==INT_MAX || dp[n][target]==INT_MAX-1)
		return -1;
	return dp[n][target];
}

int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);
	
    int coins[] =  { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
    int m = sizeof(coins)/sizeof(coins[0]);
    int V = 43;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);

}