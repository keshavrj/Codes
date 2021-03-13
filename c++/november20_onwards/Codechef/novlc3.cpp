#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
using namespace std;
int match(deque<int> &dmag,deque<int> &dfer, string s, int k)
{
    int cnt=0, sheets;
    while(!( dmag.empty() || dfer.empty() ) )
    {
        int x=dmag.front();
        int y= dfer.front();
        if(x>y)
             sheets = count(s.begin()+y, s.begin()+x, ':');
        else
             sheets = count(s.begin()+x, s.begin()+y, ':');

        int power = k+1-abs(x-y)-sheets;
        if(power>0)
            {
                cnt++;
                dmag.pop_front();
                dfer.pop_front();
            }
        else
        {
            if(x<y)
                dmag.pop_front();
            else
                dfer.pop_front();
        }

    }
    return cnt;

}

int main()
{
    fastio;

    // #ifndef ONLINE_JUDGE
    //     freopen("input1.txt","r", stdin);
    //     freopen("output1.txt","w", stdout);
    // #endif
tc{

int n,k;cin>>n>>k;
string s;cin>>s;
int cnt=0, sheets=0;
deque<int> dmag, dfer;
for(int i=0;i<n;i++)
{
    if(s[i]=='X')
    {
        cnt+=match(dmag,dfer, s , k);
        dmag.clear();
        dfer.clear();
    }
    if(s[i]=='M')
        dmag.pb(i);
    else if(s[i]=='I')
        dfer.pb(i);
   

}
cnt+=match(dmag,dfer, s , k);
cout<<cnt<<endl;

}}
