#include<iostream>
using namespace std;
int64_t gcd(int64_t a, int64_t b)
{
     int rem;
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        {
                rem=a%b;
                return gcd(b,rem);
        }

}
int64_t lcm(int64_t a,int64_t b)
{
     return a*b/gcd(a,b);
}
int main()
{
    int a,b;
   /* cout<<"enter no. of Test cases"<<endl;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter a and b"<<endl;*/
         cin>>a>>b;
        cout<<lcm(a,b)<<endl;

    return 0;
}
