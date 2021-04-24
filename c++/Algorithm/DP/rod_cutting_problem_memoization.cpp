// this question is almost similar to unbounded knapsack.

#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int cutRod(int wt[] ,int len[],int n, int max_len)
{
	if(n==0 || max_len==0)
		return 0;
	if(dp[n][max_len]!=-1)
		return dp[n][max_len];
	if(len[n-1]<=max_len)
	{
		return dp[n][max_len] = max(wt[n-1]+cutRod(wt,len,n,max_len-len[n-1]),cutRod(wt,len,n-1,max_len) );	
	}
	return dp[n][max_len]= cutRod(wt,len,n-1,max_len);

}

int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);
	memset(dp,-1,sizeof dp);
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