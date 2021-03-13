#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    fastio;
tc{

	string s;
	cin>>s;
	int cnt=0;
	if(s.size()&1)
	{
		cout<<-1<<endl;
		continue;
	}

	for(auto x: s)
	if(x=='1')
		cnt++;

int n= s.size();
	cout<<((n/2)-cnt)<<endl;

	}

return 0;
}

