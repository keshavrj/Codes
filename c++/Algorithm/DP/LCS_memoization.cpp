#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

    int dp[1001][1001];
    int slve( string &s1,string &s2,int x,int y)
    {
          if(x==0 || y==0)
            return 0;
          
          if(dp[x][y]!=-1)
            return dp[x][y];
          
          if(s1[x-1]==s2[y-1])
            return dp[x][y]= 1+slve(s1,s2,x-1,y-1);
          else
              return dp[x][y]= max(slve(s1,s2,x-1,y), slve(s1,s2,x,y-1)); 
              
    }
    
    int lcs(int x,int y, string s1, string s2)
    {
        memset(dp,-1,sizeof(dp));
        int ans= slve(s1,s2,x,y);
        return ans;
    }


// { Driver Code Starts.
int main()
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w", stdout);
    
    int t,n,k,x,y;
    // cin>>t;
    // while(t--)
    // {
        cin>>x>>y;
        string s1,s2;
        cin>>s1>>s2;     
        cout << lcs(x, y, s1, s2) << endl;
    // }
    return 0;
}
  // } Driver Code Ends