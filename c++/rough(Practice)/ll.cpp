#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
int T;
cin>>T;
while(T--)
{
   bool flag=1,flag2=1;
    int n,prevswap=0,afterswap=0;
    cin>>n;
    int swapcost=0;
vector<int> a(n);
vector<int> b(n);
for(int x=0;x<n;x++)
    cin>>a[x];
for(int x=0;x<n;x++)
    cin>>b[x];
//int range= max(*max_element(a.begin(),a.end()),*max_element(b.begin(),b.end()));
sort(a.begin(),a.end());
sort(b.begin(),b.end());
int range=max(a[n-1],b[n-1]);
vector<int> ccount(range+1,0);
for(int i=0;i<n;i++)
    ccount[a[i]+1]++;
for(int i=0;i<n;i++)
    ccount[b[i]+1]++;

for(auto x:ccount)
    {
        if(x%2==1)
            {
            cout<<-1<<endl;
            flag=0;
            break;
            }
    }
if(flag)
{
   vector<pair < int,int > > comp;

   for(int i=1;i<=range+1;i++)
            comp.push_back(make_pair(count(a.begin(),a.end(),i),count(b.begin(),b.end(),i)));

for(int i=0;i<comp.size();i++)
    {
        if(comp[i].first!=comp[i].second)
            flag2=0;
    }
if(flag2)
    cout<<0<<endl;
else
{
    for(int i=0;i<comp.size();i++){
    if(comp[i].first>comp[i].second)
    {
        prevswap=(comp[i].first-comp[i].second)/2 - afterswap ;
        if(prevswap>0)
        swapcost+=prevswap*(i+1);
        if(prevswap==0)
            afterswap=0;
    }
    else if(comp[i].first<comp[i].second)
    {
        afterswap=(comp[i].second-comp[i].first)/2 - prevswap;
        if(afterswap>0)
        swapcost+=afterswap*(i+1);
        if(afterswap==0)
            prevswap=0;
    }
    }
cout<<swapcost<<endl;
}

}
}

return 0;
}
