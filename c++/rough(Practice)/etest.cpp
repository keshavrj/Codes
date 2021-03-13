#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n,a[50005],i,j,b[50005],sum=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        j=n;
        b[n]=n;
        for(i=n-1;i>0;i--)
        {
            if(a[j]<a[i])
            j=i;
            b[i]=j;
        }
        for(i=1;i<=n;i++)
            cout<<b[i]<< "  ";
        for(i=1;i<=n;i++)
        {
            if((a[b[i]]-a[i])>=0)
            sum+=(a[b[i]]-a[i]);
        }
        cout<<endl<<sum<<endl;
    }
}
