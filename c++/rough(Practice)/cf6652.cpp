#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc long t;cin>>t;while(t--)
using namespace std;
int main()
{
    fastio;
tc{
        int x0,x1,x2,y0,y1,y2;cin>>x0>>x1>>x2>>y0>>y1>>y2;
        int k=(x2<y1)?x2:y1;
        x2-=k;
        int cnt=2*k;
        int temp = (x0+x2-y2)>0?0:x0+x2-y2;
        cnt+=2*temp;
        cout<<cnt<<endl;
    }
    return 0;
}
