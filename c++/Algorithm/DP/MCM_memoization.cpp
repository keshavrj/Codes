#include <bits/stdc++.h>
using namespace std;

int dp[101][101];

int MCM(int arr[], int i, int j)
{
	if(i>=j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	// int mn= INT_MAX;
	//else
	dp[i][j]=INT_MAX;
	for(int k=i;k<j;k++)
		dp[i][j]= min(dp[i][j], MCM(arr,i,k)+MCM(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
	return dp[i][j];
}


int main()
{	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);	
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    int arr[] = { 1, 2, 3, 4, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
	memset(dp,-1,sizeof dp); 
	    cout << "Minimum number of multiplications required is: "
         << MCM(arr, 1, n - 1);
}
