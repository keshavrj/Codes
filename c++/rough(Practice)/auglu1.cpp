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
bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}
int main()
{
fastio;
tc{
int n;cin>>n;
map<int,int> m1,m2;
int arr[n];for(auto &x:arr){cin>>x;m1[x]++;}
for(auto &i:m1)
{
    m2[i.second]++;
}

auto mx = max_element(m2.begin(), m2.end(), compare)->first;
cout<<mx<<endl;
}

return 0;
}

