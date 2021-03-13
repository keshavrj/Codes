#include<bits/stdc++.h>
#define  ll long long int
#define inf 1e18
#define endl "\n"
using namespace std;
int main()
{
    bool flag=0;
    ll n,i,a=0,b=0,c=0;
    cin>>n;
    string s;cin>>s;
    i=0;
    while(i<n && s[i]=='-') c++,i++;
    if(i<n && s[i]=='A' && c) a=c;
for(;i<n;i++)
{
        if(s[i]=='A') a++;
        else if(s[i]== 'B')b++;
        else {
                c=0;
        if(i>0 && s[i]=='-' && s[i-1]=='A') flag=0;
        else if(i>0 && s[i]=='-' && s[i-1]=='B') flag=1;
        while(i<n && s[i]=='-') c++,i++;

        if(i<n && s[i]=='B')
        {   b++;
            if(flag)b+=c;
        }
        else if(i<n && s[i]=='A')
        {   a++;
            if(!flag)a+=c;
            else
            { a+=c/2;
                b+=c/2;}}
        }
}
if(s[n-1]=='-' && flag) b+=c;
if(a>b) cout<<"A"<<endl;
else if(b>a) cout<<"B"<<endl;
else cout<<"Coalition government"<<endl;
return 0;
}
