#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int knapsack(int wt[], int val[], int w, int n)
{
	int dp[n+1][w+1];
	// base condition for recursive approach 
	// will become initialization condition for matrix; 
	//base condition(smallest possible case) //Recursive:
	// if(n==0 || w==0)return 0;
	for(int i=0;i<n+1;i++)
		dp[i][0]=0;
	for(int i=0;i<w+1;i++)
		dp[0][i]=0;

	// choice will be converted to iterative , n->i, w->j:
	// if(wt[n-1]<=w)
		// return dp[n][w] = max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
	// else
	// return dp[n][w]= knapsack(wt,val,w,n-1);
	for(int i=1;i<n+1;i++)
		for(int j=1;j<w+1;j++)
			if(wt[i-1]<=j)
				dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]], dp[i-1][j]);
			else dp[i][j]= dp[i-1][j];

	return dp[n][w];
}


int main()
{
     
   freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    
    // memset(dp,-1,sizeof(dp));
	int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack( wt, val, W, n);
    return 0;
}