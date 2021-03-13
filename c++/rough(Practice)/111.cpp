#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    bool flag= 1;
    set<int> s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.insert(x);
        if(x!=0)
            flag = 0;
    }
    if(flag)cout<<0<<endl;
    else cout<<s.size()<<endl;


}
return 0;
}
