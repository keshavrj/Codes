#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool subsum(int arr[], int sm, int n)
{
	bool dp[n+1][sm+1];
	for(int i=0;i<=sm;i++)
			dp[0][i]=false;
	for(int i=0;i<=n;i++)
		dp[i][0]=true;

	for(int i=1;i<=n;i++)
		for(int j=1;j<=sm;j++)
		{
			if(arr[i-1]<=j)
				dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
			else dp[i][j]= dp[i-1][j];
		}
		
	// for(int i=0;i<=n;i++)
	// 	{for(int j=0;j<=sm;j++)cout<<dp[i][j]<<" ";cout<<endl;}




return dp[n][sm];




//	if(sm==0)
	// 	return true;
	// if(n==0)
	// 	return false;
	// if(dp[n][sm]!=-1)
	// 	return dp[n][sm];

	// if(arr[n-1]<=sm)
	// 	return dp[n][sm]= subsum(arr,sm-arr[n-1],n-1) || subsum(arr,sm,n-1);
	// return dp[n-1][sm]= subsum(arr,sm,n-1);
}


int main()
{
     
   freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    
    // memset(dp,-1,sizeof(dp));

    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 10;
    int n = sizeof(set) / sizeof(set[0]);
    if (subsum(set, sum, n)==true)
        printf("Found a subset with given sum\n");
    else
        printf("No subset with given sum\n");
}