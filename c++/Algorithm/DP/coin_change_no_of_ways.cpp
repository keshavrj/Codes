// this question is almost similar to unbounded knapsack.

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int target)
{
	int dp[n+1][target+1];
	for(int i=0;i<=target;i++)
		dp[0][i]=0;
	for(int i=0;i<=n;i++)
		dp[i][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=target;j++)
		{
			if(arr[i-1]<=j)
				dp[i][j]= dp[i][j-arr[i-1]]+ dp[i-1][j];
							//take it 	   + don't take it;
			else dp[i][j]= dp[i-1][j];
						 //don't take it;
		}
	}
	return dp[n][target];
}

int main()
{
	freopen("input1.txt","r",stdin);freopen("output.txt","w", stdout);
	// memset(dp,-1,sizeof dp);
	int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int target = 4;
    cout << solve(arr, m, target);

}