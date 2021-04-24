#include<bits/stdc++.h>
using namespace std;
int minCoins(int arr[], int n, int target)
{
	int inf= INT_MAX-1;
	vector<int> dp(target+1, inf);
	dp[0]=0;
	for(int i=1;i<=target;i++)
	{
		// int ans= inf;
		for(int j=0;j<n;j++)
		{
			if(arr[j]<=i)
				dp[i]= min(dp[i], 1+dp[i-arr[j]]);
		}
	}
	if(dp[target]==inf)
		return -1;
	else return dp[target];



}

int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);
	
    int coins[] =  {9, 6, 5,1};
    int m = sizeof(coins)/sizeof(coins[0]);
    int V = 4;
    cout << "Minimum coins required is "
         << minCoins(coins, m, V);

}