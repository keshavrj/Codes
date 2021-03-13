#include<bits/stdc++.h>
using namespace std;
/*long long dp[10000002]={0};

long long byteland(long long n)
{
    long long a;
    if(n==0)
        return 0;
    if(n>0&&n<10000000&&dp[n]==0)
    {
        a=max(n,(byteland(n/2)+byteland(n/3)+byteland(n/4)));
        dp[n]=a;
    }
    else if(n>=10000000)
        a=max(n,(byteland(n/2)+byteland(n/3)+byteland(n/4)));
    else
        return dp[n];

    return a;
}*/
int byteland(int n, int *a)
{
    if(n==0||n==1||n==1 || n==2 || n==3 || n==4)return n;
    else if(a[n]!=0)
        return a[n];

    else
        a[n]= max(n,byteland(n/2,a)+byteland(n/4,a)+byteland(n/3,a));
                return a[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    long long n;
    while(cin>>n)
    {
        int *a = new int a[n+1];
        cout<<byteland(n,a)<<"\n";
    }
    return 0;
}
