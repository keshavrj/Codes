#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define umap unordered_map
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(false);

vi a(100001,1);
a[0]=0;
a[1]=0;
for(int i=2;i*i<=100000;i++)
{
 if(a[i]==1) {
    for(int j=i*i;j<=100000;j+=i)// selecting all multiples
        a[j]=0;
}
}
tc{
int n;cin>>n;
if(a[n]==1)
cout<<"yes"<<endl;
else cout<<"no"<<endl;

}
















/*tc{
    bool flag=0;
    int n;cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"no"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"yes"<<endl;
}*/




    return 0;
}

