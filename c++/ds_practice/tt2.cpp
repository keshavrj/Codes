#include<bits/stdc++.h>
#define uint64_t unsigned long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        uint64_t n,m, a[n], b[m];cin>>n>>m;
        queue<uint64_t> q;
        set<uint64_t> s;
        map<uint64_t,uint64_t> mm;
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        q.push(0);s.insert(0);
        while(!q.empty())
        {
            uint64_t x= q.front();q.pop();
            for(uint64_t i=0;i<n;i++)
            {
                uint64_t y=a[i];
                if(!mm[(x|y)])
                {
                    mm[(x|y)]++;s.insert((x|y));q.push((x|y));
                }
            }
            for(uint64_t i=0;i<n;i++)
            {
                uint64_t y=b[i];
                if(!mm[(x&y)])
                {
                    mm[(x&y)]++;s.insert((x&y));q.push((x&y));
                }
            }
        }
        cout<<s.size()<<'\n';
    }
}