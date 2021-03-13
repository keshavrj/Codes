#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
vector<int> stringtoint(const string &s)
{
    vector<int> v;
    string t;
    stringstream x(s);
    while(x>>t)
    {
        int p=0;
        stringstream g(t);
        g>>p;
        v.push_back(p);
    }
        return v;
}
int main()
{
fastio;
//string num;
//getline(cin,num);
//vector<int> vect=stringtoint(num);
int n;
cin>>n;
char x;
for(auto i=0;i<n;i++)
{cin>>x;
    x^=(1<<5);
cout<<x<<endl;
}



return 0;
}
