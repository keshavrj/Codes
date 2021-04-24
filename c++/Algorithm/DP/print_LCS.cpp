#include<bits/stdc++.h>
using namespace std;
void printLCS(string s1,string s2, int n, int m)
{
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
			else if(s1[i-1]==s2[j-1])
			{
				dp[i][j]= dp[i-1][j-1]+1;
			} 
			else dp[i][j]= max( dp[i-1][j], dp[i][j-1] );
		}
	}

	string s="";
	for(int i=n, j=m;i>0 && j>0;)
	{

			if(s1[i-1]==s2[j-1])
			{
				s+=s1[i-1];
				i--, j--;
			}
			else if(dp[i-1][j]>dp[i][j-1])
					i--;
			else j--;
			
		
	}
reverse(s.begin(),s.end());
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