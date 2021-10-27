#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n)
{
    int ans=0;
    while(n)
    {
        ans+= n%10;
        n/=10;
    }
    return ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;cin>>n;
    int arr[n];

    map<int,int> mp;


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int ans=0;
    int prev = mp.begin()->second;
    
    map<int,int>::iterator it;
    
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        ans= max(ans, it->second - prev);
        prev= it->second;
    }
    cout<<ans<<endl;

}
