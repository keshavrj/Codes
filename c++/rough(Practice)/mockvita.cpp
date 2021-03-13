//This is The Coding Area
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int T,n,ccount=0;
  //cout<<"Enter No. of Test cases"<<endl;
  cin>>T;
  //int a[T];
  while(T--)
  {
    cin>>n;
while(n!=0)
{
    n/=2;
    ccount++;
}
cout<<ccount<<endl;
ccount=0;
}
 return 0;

}
