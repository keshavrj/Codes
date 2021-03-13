#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define mod 1000000007
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
ll n;cin>>n;
bool flag=1;
ll arr[n];
ll onekaindex=-1;
for(auto i=0;i<n;i++)
	{
		cin >> arr[i];
		ll x=arr[i];
		if(arr[i]==1)
		{
			flag=0;
			onekaindex=i;
		}
	}

if(n==1)
{
	ll q;cin>>q;
	while(q--)
	{
		ll r;cin>>r;
		if(arr[0]&1LL)
		{
			cout<<((r*arr[0])%mod)<<endl;
		}
		else
			cout<<((r*(arr[0]-1))%mod +1 )%mod<<endl;

	}
}

else if(onekaindex==0)
{
ll q;cin>>q;
while(q--)
{
	ll ans=0;
	ll r;cin>>r;
	if(r%n==0 || r%n== 1)
		{
			ans= (r/n)%mod;
			ans= max(1LL,ans);
		}
	else
		ans= (r/n + 1)%mod;
	
	cout<<ans<<endl;
}

}

else if(onekaindex == n-1)
{
	ll dp[n];dp[0]=arr[0] - (arr[0]%2);
	for(auto i=1;i<n-1;i++)
	{
		if(!(arr[i]&1LL))
			dp[i]=(dp[i-1]%mod + arr[i]%mod)%mod;
		else
			dp[i]=(dp[i-1]%mod + (arr[i]-1)%mod)%mod;

	}
	dp[n-1] = (dp[n-2]%mod + 1)%mod;
	//for(auto x:dp)cout<<x<<",";cout<<endl;
	ll q;cin>>q;
	while(q--)
	{
		ll r;cin>>r;
		ll rem= r%n;
		ll ans=0;
		if(rem!=0)
			{
				ans= (((r/n)*dp[n-1])%mod + dp[rem-1])%mod;
				if(arr[rem-1]&1LL)
					ans = (ans%mod + 1)%mod;
			}
		else
			ans= ((r/n)*dp[n-1])%mod;
		cout<<(ans%mod)<<endl;


	}


}

else if(flag==1) // no 1;
{
ll dp[n];dp[0]=arr[0]- (arr[0]%2);
	for(auto i=1;i<n-1;i++)
	{
		if(!(arr[i]&1LL))
			dp[i]=(dp[i-1]%mod + arr[i]%mod)%mod;
		else
			dp[i]=(dp[i-1]%mod + (arr[i]-1)%mod)%mod;

	}
	if(n>1)
	{
	if(arr[n-1]&1LL)
		dp[n-1] = (dp[n-2]%mod + arr[n-1]%mod)%mod;
	else
		dp[n-1] = (dp[n-2]%mod + (arr[n-1]-1)%mod)%mod;
	}
//for(auto x: dp)cout<<x<<", ";cout<<endl;
	ll q;cin>>q;
	while(q--)
	{
		ll r;cin>>r;
		ll rem= r%n;
		//cout<<rem<<":"<<endl;
		ll ans=0;
		if(rem!=0)
			{
				ans= ((r/n)*dp[n-1])%mod + dp[rem-1];
				if(arr[rem-1]&1LL)
					ans = (ans%mod + 1)%mod;
			}
		else
			{
				// if(n==1)
				// {

				// }
				if(arr[n-1]&1LL)
					ans= ((r/n)*dp[n-1])%mod;
				else
					{
						ans= ((r/n)*dp[n-1])%mod;
						ans = (ans%mod + 1)%mod;
					}			
			}
		cout<<(ans%mod)<<endl;
	}
}
// write your code here
else
{
    ll dp[n+1]={0};
    if(arr[onekaindex-1]&1LL)
    {
    for(auto i=1;i<n;i++)
    {
        if(arr[i-1]==1)
            dp[i] = dp[i-1]%mod;
        if(!(arr[i-1]&1LL)   ||   i==onekaindex)
            dp[i]=(dp[i-1]%mod + arr[i-1]%mod)%mod;
        else 
            dp[i]=(dp[i-1]%mod + (arr[i-1]-1)%mod)%mod;

    }
    if(arr[n-1]&1)
        dp[n] = (dp[n-1]%mod + arr[n-1]%mod)%mod;
    else
        dp[n] = (dp[n-1]%mod + (arr[n-1]-1)%mod)%mod;
    }
    else
    {
        for(auto i=1;i<n;i++)
        {
        if(arr[i-1]==1)
            {dp[i] = dp[i-1]%mod;continue;}
        if((arr[i-1]&1LL) || i==onekaindex)
            dp[i]=(dp[i-1]%mod + (arr[i-1]-1)%mod)%mod;
        else 
            dp[i]=(dp[i-1]%mod + arr[i-1]%mod)%mod;
        }
        if(arr[n-1]&1LL)
            dp[n] = (dp[n-1]%mod + arr[n-1]%mod)%mod;
        else
            dp[n] = (dp[n-1]%mod + (arr[n-1]-1)%mod)%mod;
}

//   for(auto X:dp)cout<<X<<" ,";cout<<"'"<<onekaindex<<"'"<<endl;
ll q;cin>>q;
    while(q--)
    {
    ll r;cin>>r;
    ll rem=r%n;
    ll ans=0;
  if(rem-1==onekaindex)
  {
  	if(!(arr[onekaindex-1]&1LL))
  		ans = ( ((r/n)*dp[n])%mod + dp[rem]%mod + 2)%mod;
  	else
  		ans = (((r/n)*dp[n])%mod + dp[rem]%mod )%mod;

  }
  else if(rem == onekaindex)
  {
  	if(!(arr[onekaindex-1]&1LL))
  		ans = (((r/n)*dp[n])%mod + dp[rem]%mod + 1)%mod;
  	else
  		ans = (((r/n)*dp[n])%mod + dp[rem]%mod )%mod;
  }
  else if(rem==0)
  {
  	ans = ((r/n)*dp[n])%mod;
  	if(arr[n-1]%2==0)
  		ans = (ans%mod + 1)%mod;
  }
  else
  {
  	ans = (((r/n)*dp[n])%mod + dp[rem]%mod)%mod;
  	if(arr[rem-1]&1LL)
  		ans = (ans%mod + 1)%mod;
  }
        cout << (ans%mod) << endl;
}
}
}}