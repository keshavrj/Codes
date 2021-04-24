#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int dp[505][1004];
int subsum(int arr[], int sm, int n)
{
	if(sm==0)
		return true;
	if(n==0)
		return false;
	if(dp[n][sm]!=-1)
		return dp[n][sm];

	if(arr[n-1]<=sm)
		return dp[n][sm]= subsum(arr,sm-arr[n-1],n-1) || subsum(arr,sm,n-1);
	return dp[n-1][sm]= subsum(arr,sm,n-1);
}


int main()
{
     
   freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    
    memset(dp,-1,sizeof(dp));

    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 36;
    int n = sizeof(set) / sizeof(set[0]);
    if (subsum(set, sum, n)==true)
        printf("Found a subset with given sum\n");
    else
        printf("No subset with given sum\n");
}