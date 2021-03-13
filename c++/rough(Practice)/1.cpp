#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define For(a,n,xx) for(int xx=a;xx<n;xx++)
#define ll long long int
#define vi vector<int>
#define umap unordered_map
using namespace std;
const int MAX = 26;
string printRandomString(int n)
{
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];

    return res;
}



int main()
{
    ios_base :: sync_with_stdio(false);
int t;cin>>t;
while(t--)
{
    bool flag=1;
    string str;
    int n,c=1;cin>>n;
    vi vect(n);
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    int maxx=*max_element(vect.begin(),vect.end());
    if(maxx!=0){
    char s[maxx];
    s[0]='a';
    for(auto i=1;i<maxx;i++)
        s[i]=s[i-1]+1;
    for(auto i=0;i<n;i++)
   {
    for(auto j=0;j<vect[i];j++)
    {
        cout<<s[j];
    }
    if(vect[i]==0)
    {
        for(auto &x:s)
            cout<<x;
        cout<<endl;
        str=printRandomString(maxx);
        cout<<str;

        for(auto i=0;i<maxx;i++)
            s[i]=str[i];
flag=0;
    }
    cout<<endl;
    if(vect[i]==maxx && flag==1)
    {
        for(auto &x:s)
            cout<<x;
    cout<<endl;
    }
    }
}
else
{
    for(int i=0;i<=n;i++)
    {cout<<printRandomString(4);
    cout<<endl;}


}
}


    return 0;
}

