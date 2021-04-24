#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int findmin(int arr[], int n, int sm)
{
	bool dp[n+1][sm+1];
	for(int i=0;i<=sm;i++)
		dp[0][i]=0;
	for(int i=0;i<=n;i++)
		dp[i][0]=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=sm;j++)
		{
			if (arr[i-1]<=j)
				dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
			else dp[i][j]= dp[i-1][j];
		}

	int ans;
	for(int i=sm/2;i>=0;i--)
	{
		if(dp[n][i])
		{
			ans=sm-2*i;
			break;
		}
	}
	return ans;

}


int main()
{
     
   freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    
    int arr[] = {3,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int total_sum= accumulate(arr,arr+n,0);
    cout << findmin(arr, n,total_sum);
}