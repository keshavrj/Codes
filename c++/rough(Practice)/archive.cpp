#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main()
{
    int t;cin>>t;while(t--)
    {

    int arr[]={1,2,3,4,5,6,7,8};
    int k1,k2;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"k1, k2 : ";
    cin>>k1>>k2;
    int k= k1^k2;
    int ans1=0, ans2=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans1+= (arr[i]^k1);
        ans2+=(arr[i]^k2);
        ans^=arr[i];
    }
    cout<<"ans1= "<<ans1<<" ans2= "<<ans2<<endl<<"ans= "<<ans<<endl;


}return 0;}
