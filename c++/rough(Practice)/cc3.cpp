#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin>>T;
    while(T--)
    {
    ll N,x,ccount=0;
    cin>>N>>x;
    vector<long long> v(N);
    for(auto &p:v)
    cin>>p;

    sort(v.begin(),v.end());

    ll z = lower_bound(v.begin(),v.end(),x) - v.begin();

    //if(x<=v[N-1])
 //   {
    for(ll i=z ;i<v.size(); )
    {
    if(x<v[i])
    {
      ccount++;
      if(x<v[i]*2)
        x=v[i]*2;
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
for(ll i=0 ;i<z ;)
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
}
else
{
           ccount++;
        x=2*v[N-1];
}
cout<<ccount<<endl;
}
    return 0;
}
