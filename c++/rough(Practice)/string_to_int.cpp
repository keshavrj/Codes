#include<bits/stdc++.h>
#define endl "\n"
#define For(a,n) for(int xx=a;xx<n;xx++)
#define ll long long int
#define intvec vector<int>
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
    ios_base :: sync_with_stdio(false);

string num;
getline(cin,num);
vector<int> vect=stringtoint(num);


for(auto &x:vect)
    cout<<x<<endl;

cout<<endl<<endl<<accumulate(vect.begin(),vect.end(),0);


///alternate method::


/** string S, T;
    vector<string> vect;
    getline(cin, S);
    stringstream X(S);
    while (getline(X, T, ' '))
    {
        vect.push_back(T);
    }
    vector<int> arrd;
    for(auto &x:vect)
       {
           int p=0;
           stringstream g(x);
           g>>p;
           arrd.push_back(p);
       }
       **/



    return 0;
}

