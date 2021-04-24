#include <bits/stdc++.h>
using namespace std;
int main()
{	
	freopen("output.txt","w",stdout);
	int dp[10][10]={{}};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}

}