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
int main()
{
    fastio;
ll i,j,n;
    	ll arr[10001],maxl[10001],minl[10001],maxr[10001],minr[10001],ans;
tc{
    		cin>>n;
    		ans=0;
    		for(i=0;i<n;i++)
    		{
    			cin>>arr[i];
    		    maxl[i]=maxr[i]=minl[i]=minr[i]=arr[i];
    		}


    		for(i=1;i<n;i++){
    		    if(maxl[i-1]>0)
                    maxl[i]+=maxl[i-1];
    			if(minl[i-1]<0)
                    minl[i]+=minl[i-1];}


    		for(i=n-2;i>=0;i--){
    		    if(maxr[i+1]>0)
    			      maxr[i]+=maxr[i+1];
    			if(minr[i+1]<0)
                     minr[i]+=minr[i+1];}


    		for(i=0;i<n-1;i++)
    		{
                ans=max(ans,abs(maxl[i]-minr[i+1]));
    			ans=max(ans,abs(maxr[i+1]-minl[i]));
    		}
    		cout<<ans<<endl;
    	}
    	return 0;
}
