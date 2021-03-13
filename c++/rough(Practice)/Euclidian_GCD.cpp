#include<iostream>
using namespace std;
int gcd(int a, int b)
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
int main()
{
    int a,b;
   /* cout<<"enter no. of Test cases"<<endl;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cout<<"Enter a and b"<<endl;*/
         cin>>a>>b;
        cout<<gcd(a,b)<<endl;

    return 0;
}
