#include<bits/stdc++.h>
//#include<vector>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
  //  cin.tie(0);
    ll n; cin>>n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            if(j>=n-1-i)
        cout<<'#';
        else
            cout<<" ";
        cout<<"\n";
    }

    return 0;

}
