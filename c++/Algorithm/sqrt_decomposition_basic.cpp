#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
 
   #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int len= sqrtl(n)+1;
int b[len+1]={0};

for(int i=0;i<n;i++)
{
    b[i/len]+= arr[i];
}
int q;cin>>q;while(q--){
    int l,r;cin>>l>>r;
    int ans=0;
    for(int i=l;i<=r;)
    {
        if(i%len==0 && i+len-1<=r)
            {ans+=b[i/len];
            i+=len;}
        else ans+=arr[i++];

    }
            cout<<ans<<endl;
}
}