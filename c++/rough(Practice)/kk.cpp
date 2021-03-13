#include <iostream>
#include<vector>
#include<cmath>
#include <cstdlib>
using namespace std;
int64_t stringskip(int64_t arr[], int64_t n)
{
    int64_t sum=0,x;
    for(int i=1;i<=n-1;i++)
    {
        x=arr[i]-arr[i-1];
        sum+=abs(x)-1;
    }
    return sum;
}

int main() {
	// your code goes here
int T;
cin>>T;
while(T--)
{
int64_t n;
cin>>n;
int64_t arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<stringskip(arr,n)<<endl;
}
	return 0;
}
