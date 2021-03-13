#include <bits/stdc++.h>
using namespace std;
int a[13][13];
int connectedCell(int n,int m) {
    int ans=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j])
            {if(a[i-1][j+1]==1 || a[i+1][j-1]==1 || a[i-1][j]==1 || a[i+1][j]==1 || a[i][j+1]==1 || a[i][j-1]==1 || a[i+1][j+1]==1 || a[i-1][j-1]==1 )
                cnt++;
            else
                {ans= max(ans, cnt);
                cnt=0;}}
        }
    }
    return ans;


}

int main()
{
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
   cout<<connectedCell(n,m)<<endl;

    return 0;
}

