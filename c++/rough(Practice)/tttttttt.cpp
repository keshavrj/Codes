#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    int n,x, cnt=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<0)
            cnt++;
    }
    cout<<cnt;


}
