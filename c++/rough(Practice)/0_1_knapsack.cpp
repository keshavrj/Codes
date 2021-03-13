#include< bits/stdc++.h >
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int pr[]={0,1,2,5,6};
    int w[]={0,2,3,4,5};
    int m=8,n=4;            ///m=capacity of bag// n=no. of elements;
    int v[5][7];                ///0 based index system;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        {   if(i==0||j==0)
                v[i][j]=0;
            else if(w[i]<=j)
                v[i][j]=max(v[i-1][j],pr[i]+v[i-1][j-w[i]]);
            else
                v[i][j]=v[i-1][j];  }
    cout<<v[n][m]<<endl<<endl;
        int p=n;//row
        int q=m;//column
        while(p>0 && q>0)
        {
            if(v[p][q]==v[p-1][q])
        {   cout<<p<<" = 0 "<<endl;
            p--;  }
        else
        {   cout<<p<<" = 1"<<endl;
            p--;
            q=q-w[p];   }
        }

return 0;
}
