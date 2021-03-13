#include<iostream>
using namespace std;
long long  fib(int64_t n,int64_t m)
{
            long long F[n+2];
        F[0]=0;
        F[1]=1;
        for(int64_t i=2;i<=n;i++)
                F[i]=(F[i-1]+F[i-2])%m;

            return F[n];
}
int main()
{
    int64_t n,res,m;
    /*cout<<"enter no. of Test cases"<<endl;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter n"<<endl;
       */ cin>>n>>m;
       res=(long long)fib(n,m);
        cout<<res<<endl;
    //}
    return 0;
}
