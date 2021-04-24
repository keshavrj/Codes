#include<bits/stdc++.h>
using namespace std;
void printLCS(string s1,string s2, int n, int m)
{
	string dp[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				dp[i][j]="";
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]= dp[i-1][j-1]+s1[i-1];
			} 
			else dp[i][j]=dp[i-1][j].size()>dp[i][j-1].size()?dp[i-1][j]:dp[i][j-1];
		}
	}

	string s=dp[n][m];
	cout<<s<<endl;
}

int main()
{
	freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);
	string a = "AGGTAB";
  string b = "GTXAYB";
  int m = a.length();
  int n = b.length();
  printLCS(a,b ,m,n);
	
}