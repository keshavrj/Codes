#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool pr[100005];
vector<int> prime;

vector<ll> segmentedsieve(ll L, ll R)
{

	int mx= R-L+1;
	vector<bool> arr(mx,1);

	vector<ll> ans;
	for(ll p:prime)
	{
		if(L==1)L++;
		if(p*p<=R)
		{
			int i = (L/p)*p;
			if( i< L ) i+=p;
			for(;i<=R;i+=p)
				if(i!=p)arr[i-L]=0;
		}
	}
	for(ll i=0;i<mx;i++)
		if(arr[i])ans.push_back(L+i);
	return ans;

}

int main()
{
	
	memset(pr,1,sizeof(pr));
	pr[0]=pr[1]=0;
	ll r= 1e9+3000, l=1e9-3000;
	for(int i=2;i*i<=100000;i++)
		{
			if(pr[i]==1)
			{
    			for(int j=i*i;j<=100000;j+=i)
        			pr[j]=0;
			}
		}

	for(int i=2;i<=100000;i++)
		if(pr[i])prime.push_back(i);




	int t;cin>>t;
	for(int tc=1;tc<=t;tc++)
	{
		uint64_t z;cin>>z;
		ll n= sqrtl(z);
		ll R= n+3000, L=n-3000;
		vector<ll> arr = segmentedsieve(max(2LL,L),R);
		int l=0,r=arr.size();

		auto mid= lower_bound(arr.begin(),arr.end(),n)-arr.begin();
		mid-=1;
		ll anss=arr[mid]*arr[mid+1];
		
		while(anss>z)
		{
			mid--;
			anss=arr[mid]*arr[mid+1];
		}
		cout<<"Case #"<<tc<<": "<<anss<<endl;


	}
}