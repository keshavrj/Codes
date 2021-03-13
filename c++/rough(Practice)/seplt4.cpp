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
int main()
{
    fastio;
int r,c;cin>>r>>c;
string s="";
if(r==1){for(int i=0;i<r;i++)
    s+="U";
for(int j=0;j<c-1;j++)
    s+="R";
}
else
{
    if(c&1)
    {
    for(int j=0;j<c-1;j++)
    {
        s+="U";
        for(int i=0;i<r;i++)
            {s+="R";}
        s+="U";
        for(int x=r-1;x>0;x--)
            {s+="L";}
    }
    for(int i=0;i<r-1;i++)
    s+="R";
    }
    else
    {
    for(int j=0;j<c-1;j++)
    {
        for(int i=0;i<r;i++)
            s+="R";

        s+="U";
        for(int x=r-1;x>0;x--)
            s+="L";
        s+="U";
    }
    for(int i=0;i<r-1;i++)
        s+="R";
    }


}
cout<<s<<endl;



return 0;
}

