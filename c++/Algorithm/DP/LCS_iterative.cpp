// longest Common Subsequence
// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends

// int dp[104][104];
class Solution
{
    public:
     int lcs(int x, int y, string s1, string s2)
    {
    
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++)
        dp[i][0]=0;
        for(int i=0;i<=y;i++)
        dp[0][i]=0;
        int cnt=0,ans=0;
        for(int i=1;i<=x;i++)
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                {   
                    cnt++;
                    dp[i][j]= max(ans,dp[i-1][j-1]+1);
                }
                else
                {
                    ans=max(ans,cnt);
                    cnt=0;
                    dp[i][j]= max(ans,max(dp[i-1][j], dp[i][j-1]));
            
                }
            }
            
        return dp[x][y];
    }
};


// { Driver Code Starts.
int main()
{
    freopen("input.txt","r",stdin);freopen("output.txt","w", stdout);
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends