#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
int T;
cin>>T;
while(T--)
{
int N, ccount=0,x;
cin>>N>>x;
vector<int> v(N);
                                                    for(auto &p:v)
                                                        cin>>p;

sort(v.begin(),v.end());

int z=(lower_bound(v.begin(),v.end(),x)) - v.begin();
for(auto i=z ;i<v.size(); )
{
    if(x<v[i])
    {
      ccount++;
      x=min(2*x,v[i]);
    }
    else if(x==v[i])
    {
        ccount++;
        x=x*2;
        i++;
    }
     else
    {
        ccount++;
        x=2*v[i];
        i++;
    }
}
for(auto i=0 ;i<z ;)
{
    if(x<v[i])
    {
      ccount++;
      x=min(2*x,v[i]);
    }
    else if(x==v[i])
    {
        ccount++;
        x*=2;
        i++;
    }
    else
    {
        ccount++;
        x=2*v[i];
        i++;
    }
}
cout<<ccount<<"\n";
}
    return 0;
}
