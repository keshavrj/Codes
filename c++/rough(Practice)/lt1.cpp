#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define For(a,n,xx) for(int xx=a;xx<n;xx++)
#define ll long long int
#define vi vector<int>
#define umap unordered_map
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);
int t;cin>>t;
while(t--)
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    For(0,n,i)
    {
        cin>>a[i];
    }
    For(0,n,j)
    if(a[j]%k==0)
            cout<<'1';
        else
            cout<<'0';
    cout<<endl;


}




    return 0;
}

