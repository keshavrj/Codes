#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
bool ispal(string s,int i, int j)
{
	while(i<j)
	{
		if(s[i]!=s[j])
			return 0;
		i++, j--;
	}
	return 1;
}
int PLPT(string s, int i , int j)
{
	if(i>=j)
		return 0;
	if(ispal(s,i,j))
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	
	dp[i][j]=INT_MAX;
	for(int k=i;k<j;k++)
	{
		dp[i][j]= min(dp[i][j],1+PLPT(s,i,k)+PLPT(s,k+1,j));
	}
	return dp[i][j];
}

int main()
{	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);	
	freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
	memset(dp,-1,sizeof dp);
    string s = "ababbbabbababa";
    int n= s.size();
    cout<<PLPT(s,0,n-1)<<endl;
}