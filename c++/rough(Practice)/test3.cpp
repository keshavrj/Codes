#include<bits/stdc++.h>
using namespace std;
int main()
{

    std::ios_base::sync_with_stdio(0);
    vector<int> arr{1,11,-3,9,5,6};
    //find(arr.begin(),arr.end(),0) != arr.end() ?  cout << "Element found" : cout << "\nElement not found";
auto x=find(arr.begin(),arr.end(),11);
//cout<<typeid(x).name()<<endl;
if(x!=arr.end())
    cout<<"yes";
else
   cout<<"No";
//cout<arr[6]<<endl<<*arr.end()<<endl;
    //cin>>a>>b;
 //cout<<*min_element(arr.begin(),arr.end())<<endl;

}
