#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n%2)
            {res*=a;
            n--;}
        else
            {a*=a;
            n/=2;}
    }
    return res;
}
int main()
{
    freopen("input1.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    int a,n;
    cin>>a;
    cin>>n;
    cout<<power(a,n)<<endl;
    return 0;
}
