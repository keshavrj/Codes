#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
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
    freopen("output.txt","w", stdout);
   #endif


vector<bool> pr1(1000001,1);
vector<bool> pr2(1000001,1);

pr1[0]=0;
pr1[1]=0;
for(int i=2;i*i<=1000000;i++)
{
 if(pr1[i]==1) {
    for(int j=i*i;j<=1000000;j+=i)// selecting all multiples
        pr1[j]=0;
}
}

for(ll i=1000001;i*i<=(ll)1e12;i++)
{
 if(pr2[i]==1){
    for(int j=i*i;j<=(ll)1e12;j+=i)// selecting all multiples
        pr2[j]=0;
}
}


int t;cin>>t;
for(int tc=1;tc<=t;tc++)
{
ll n, ans=0;cin>>n;
ll sn = sqrt(n);
ll v1,v2;
while(1){
for(int i=sn;i>=2;i--)
{
	if(pr[i])
	{
		v1=i;
		break;
	}
}

for(int i=sn;i<=n;i++)
{
	if(pr[i])
	{
		v2=i;
		break;
	}
}

ll res= v1*v2;
if (v1*v2>n)

}
cout<<"case #"<<tc<<": "<<res<<endl;

// cout<<endl;
}
}
