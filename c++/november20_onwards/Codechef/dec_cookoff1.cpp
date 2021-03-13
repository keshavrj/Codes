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
	int x,y,k,n;
	bool flag= 1;
	cin>>x>>y>>k>>n;
	if(x>y)
		swap(x,y);
	for(int i=x,j=y;i<=j;i+=k,j-=k)
	{
		if(i==j)
			{cout<<"yes \n";
		flag=0;
		break;
			}

	}
	if(flag)
		cout<<"No\n";

}

return 0;
}

