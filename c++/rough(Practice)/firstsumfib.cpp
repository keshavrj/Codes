#include<iostream>
using namespace std;
unsigned long long  sumfib(unsigned long long n)
{
           unsigned long long F[n+2];
        F[0]=0;
        F[1]=1;
        for(unsigned long long  i=2;i<=n+2;i++)
                F[i]=(F[i-1]+F[i-2])%10;

                if(F[n+2]!=0)
            return F[n+2]-1;
            else
                return 9;
}
int main()
{
    unsigned long long n,res;
    /*cout<<"enter no. of Test cases"<<endl;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter n"<<endl;
       */
       cin>>n;
       res=(long long)sumfib(n);
        cout<<res<<endl;
    //}
    return 0;
}

