#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc long t;cin>>t;while(t--)
using namespace std;
int main()
{fastio;
tc{
    int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
  int cnt=0;
    for(int i=0;i<n-1;i++)
        if(a[i]>=a[i+1])cnt++;
cout<<"--------"<<cnt<<endl;
    if(cnt==0) cout<<"First\n";
    else if(n%2==1 && ((cnt/2)%2==1))
        cout<<"First\n";
    else if(n%2==0 &&((cnt/2)%2==0))
        cout<<"Second\n";

}
return 0;
}
