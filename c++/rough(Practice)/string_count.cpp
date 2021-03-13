#include<bits/stdc++.h>
#define endl "\n"
#define For(a,n) for(int xx=a;xx<n;xx++)
#define ll long long int
#define intvec vector<int>
#define umap unordered_map
using namespace std;
void breakstring(const string &s)
{
      string t;
    umap<string,int> countt;
    stringstream ss(s);
    while(ss>>t)
    countt[t]++;
     umap<string, int>:: iterator it;
     for(it=countt.begin();it!=countt.end();it++)
        cout<< it->first <<"\t"<< it->second <<endl;
}
int main()
{
    ios_base :: sync_with_stdio(false);
string x= "This is bhaau me bhaau keshav bhaau";
breakstring(x);
    return 0;
}
