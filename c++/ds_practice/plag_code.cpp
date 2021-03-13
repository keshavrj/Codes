#include <bits/stdc++.h>
using namespace std;

int dp[8001][4001];
bool comp(int a,int b)
{
    return a>b;
}
int isSubset(int total,int k,vector<int>& a,int sum,int start,int end)
{
    if(start>end)
        return 0;
    if(sum+a[start]>=k && total-sum-a[start]>=k)
        return 1;
    if(dp[sum][start]!=-1)
        return dp[sum][start];
    
    
    return dp[sum][start+1]= isSubset(total,k,a,sum+a[start],start+1,end) || isSubset(total,k,a,sum,start+1,end);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("input1.txt","r",stdin);
    freopen("output.txt","w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        int flag=0;
        sort(a.begin(),a.end(),comp);
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        
        // vector<vector<int>> dp(,vector<int>(n+1,0));
        
        memset(dp,-1,sizeof(dp));
        int total=0;
        int i;
        for(i=0;i<n;i++)
        {
            total+=a[i];
            if(total >=2*k)
            {
                if(isSubset(total,k,a,0,0,i))
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<i+1<<endl;
        else
            cout<<-1<<endl;
        
        
    }
    return 0;
}