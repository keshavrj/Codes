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

    int arr[] = {3, 1, 4, 2, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total_sum= accumulate(arr,arr+n,0);
    cout << "The minimum difference between two sets is "
         << findmin(arr, n,total_sum);
}