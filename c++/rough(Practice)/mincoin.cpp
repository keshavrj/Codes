#include<iostream>
using namespace std;
int main()
{
    int m,n,r1,r2,r3;
    cin>>m;
    n=m;
    r1=n/10;
    n=m;
    r2=(n-r1*10)/5;
    n=m;
    r3=n-r1*10-r2*5;

     cout<<r1+r2+r3<<endl;

return 0;

}
