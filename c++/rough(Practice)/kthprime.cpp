#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;


vi kp;
bool a[90000001]={false};



void kthprime()
{
a[0]=a[1]=true;
//a[1]=1;
for(int i=2;i*i<=90000000;i++)
{
 if(!a[i]) {
    for(int j=i*i;j<=90000000;j+=i)// selecting all multiples
        a[j]=true;
}
}
for(int i=2;i<=90000000;i++)
    if(!a[i])kp.pb(i);
}



int main()
{
    ios_base :: sync_with_stdio(false);
kthprime();
tc{
int n;cin>>n;
cout<<kp[n-1]<<endl;
}
    return 0;
}

