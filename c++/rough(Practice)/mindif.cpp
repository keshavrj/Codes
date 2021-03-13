#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
/*int minimumAbsoluteDifference(int arr[]) {
    //Naive Algorithm:
    int mint=INT_MAX,dif,x=5;
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
         {
         dif=abs(arr[i]-arr[j]);
         if(dif<mint)
            mint=dif;
         }
    }
return mint;


}*/
int main()
{
   vector<int> arr{1,2,3};
  int n=arr.size();
    vector<int> candycount(n+2,1);
    candycount[n]=0,candycount[n+1]=0;
   vector<int> newar(arr.begin(),arr.end()+2);
   for(auto &x:newar)
   cout<<x<<" ";
   cout<<"\n"<<newar.size();
   cout<<"count"<<endl;
   for(auto &x : candycount)
   cout<<x<<" ";

return 0;
}
