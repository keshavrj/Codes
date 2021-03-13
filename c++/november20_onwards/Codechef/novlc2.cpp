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
	vi b(n+1,0),a(n+1,0);
	int m=3;a[n]=1;
	for(int i=1;i<=n;i++)cin>>b[i];
		for(int i=n-1;i>=1;i--)
	    {
	        if(b[i]==i) a[i]=m++;
	        else a[i]=a[b[i]];
	    }
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
}