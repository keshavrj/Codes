#include<bits/stdc++.h>
#define endl "\n"
#define For(a,n,xx) for(int xx=a;xx<n;xx++)
#define ll long long int
#define intvec vector<int>
#define umap unordered_map
using namespace std;
bool m[102][102];
int main()
{
    ios_base :: sync_with_stdio(false);
    int t;cin>>t;while(t--)
    {
        string ans="", s;cin>>s;
        int ansr=1,ansc=1;
        for(int i=0;i<=s.size();i++)
            m[0][i]=m[1][i]=1;
        for(int i=2;i<=s.size();i++)
        {
            for(int j=i;j<=s.size();j++)
            {
                if((s[j-1]==s[j-i])  && (m[i-2][j-1]==1))
                    {m[i][j]=1;
                    if(i>ansr)
                    {ansr=i; ansc=j;}
                    }
                else m[i][j]=0;

            }
        }

        int x= ansc;
        while((ansr--) && x>0)
            {
                ans+=s[x-1];
                x--;

            }
        for(int i=ans.size()-1;i>=0;i--)
            cout<<ans[i];
        cout<<endl;

    }




    return 0;
}
