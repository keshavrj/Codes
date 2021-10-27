#include<bits/stdc++.h> 
using namespace std;
#define ll unsigned long long
vector<ll> chefora;
const int mod = 1e9+7;
// bool ischefora(ll n)
// {
// 	string s= to_string(n);
// 	if(s.size()%2==0)
// 		return false;
// 	for(int i=0, j=s.size()-1;i<j;i++, j--)
// 		if(s[i]!=s[j])
// 			return false;

// 		return true;
// }

ll power(ll a , ll n)
{
		ll res=1ULL;
		while(n)
		{
     		if(n&1ULL)    /// if odd;
     		{
     			res=((res)%mod*(a%mod))%mod;
     			n--;
     		}
     		a=((a%mod)*(a%mod))%mod;
     		n/=2;
 		}
 		return res%mod;
}

int main()
{

  ios_base::sync_with_stdio(0);cin.tie(0);
    cout.tie(0);

	freopen("input1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
for(ll i=0;i<=100000;i++)
	{
		// string s= to_string(i);
		
		ll res= i, s=i;
		s/=10;
		while(s)
		{
			res = res*10 + (s%10);
			s/=10;
		}

		chefora.push_back(res);
	}

	// for(int i=0;i<20;i++)
	// 	cout<<chefora[i]<<" ";

// cout<<chefora.size()<<endl;
int lens= chefora.size();
ll sum[lens+1]={0};
for(int i=1;i<lens;i++)
	sum[i]= sum[i-1] + chefora[i]; 

	// for(int i=0;i<20;i++)
	// 	cout<<sum[i]<<" ";


int q;cin>>q;
while(q--)
{
	ll L, R;
	cin>>L>>R;
	ll ans=1;
	ll a = chefora[L];
	ll n=sum[R]- sum[L];
	// cout<<n<<endl;
	ans= power(a, n);
	cout<<ans<<"\n";

}

}

