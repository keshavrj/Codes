#include<bits/stdc++.h>
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	fastio;
	int t;cin>>t;while(t--)
	{
		int n;cin>>n;
		long long a[n],ans=1;
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ans=max(a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5] , a[n-1]*a[n-2]*a[n-3]*a[0]*a[1]);
		ans=max(ans,a[n-1]*a[0]*a[1]*a[2]*a[3]);
		cout<<ans<<endl;
	}
}
