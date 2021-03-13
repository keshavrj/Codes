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
    vector<long long> a(N);
    for(auto &p:a)
    cin>>p;

    sort(a.begin(),a.end());

for(int i=0;i<N;)
{
    if(a[i]<=x)
    {
        ccount++;
        if(2*a[i]>x)
            x=2*a[i];
        i++;
    }
    else
    {
        ccount++;
        x*=2;
    }

}

    cout<<ccount<<endl;
}
    return 0;
}
