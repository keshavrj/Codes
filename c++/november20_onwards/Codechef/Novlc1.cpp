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
int main()
{
	fastio;

  	#ifndef ONLINE_JUDGE
    	freopen("input1.txt","r", stdin);
   		freopen("output1.txt","w", stdout);
	#endif
tc
{
	int n;cin>>n;
	vi a(n);
	for(auto &x: a)cin>>x;
	sort(a.begin(),a.end());
	int cnt1=a[n-1],cnt2=0;
	int i=n-2;
	while(i>=0)
	{
		if(cnt1>=cnt2)cnt2+=a[i];
	    else cnt1+=a[i];
	    i--;
	}
	cout<<max(cnt1,cnt2)<<endl;
}
}