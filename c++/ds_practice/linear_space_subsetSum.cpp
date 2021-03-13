#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("input1.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int arr[]={2,5,3};
	int sum=12;
	int dp[sum+1]={1};
	for(int i=0;i<3;i++)
	{
		int curr=arr[i];
		for(int j=sum;j>=curr;j--)
		{
			if(dp[j-curr]==1)
				dp[j]=1;
		}
	}
	for(auto x:dp)
		cout<<x<<" ";
	
}