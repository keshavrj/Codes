#include <iostream>
#include<vector>
#include<cmath>
#include <cstdlib>
using namespace std;
int64_t digitsum(int64_t x)
{
    int64_t sum=0;
 while(x)
    {
    sum+=x%10;
    x/=10;
    }

    return sum;
}
int main() {
	// your code goes here
int T;
cin>>T;
while(T--)
{
int64_t x,y;
int n,chef=0,morty=0;
cin>>n;
vector<int64_t> a(n);
vector<int64_t> b(n);
for(int i=0;i<n;i++)
cin>>a[i]>>b[i];
for(int i=0;i<n;i++)
{
    x=digitsum(a[i]);
    y=digitsum(b[i]);
    if(x>y)
        chef++;
    else if(x<y)
            morty++;
    else{
            chef++;
            morty++;
            }
}
if(chef>morty)
    cout<<0<<"  "<<chef<<endl;
else if(chef<morty)
    cout<<1<<"  "<<morty<<endl;
else
    cout<<2<<"  "<<chef<<endl;
}
	return 0;
}

