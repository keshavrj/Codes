#include<stdio.h>
int main()
{
	int dp[100005]={0};
int i=0,n,lr,rr;
 int ans=0;
scanf("%d",&n);
scanf("%d",&lr);
scanf("%d",&rr);
 int arr[n];
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
for(int i=1;i<=n;i++)
	dp[i]=dp[i-1]+arr[i-1];
ans= dp[rr]-dp[lr-1];
printf("%d", ans);

	return 0;
}