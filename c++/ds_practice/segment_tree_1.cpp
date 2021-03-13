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
#define INF INT_MAX
int arr[100005], st[100020];

void build(int si,int ss, int se)
{
	//base case;
	if(ss==se)
		{st[si]=arr[ss];return;}

	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);

	st[si]= min(st[2*si], st[2*si+1]);
}

int query(int si,int ss,int se, int qi, int qe)
{
	//base case :
		//completely outside
		if(qe<ss || qi>se)
			return INF;
		//completely inside
		if(ss>=qi && qe>=se)
			return st[si];
	int mid= (ss+se)/2;
	int l= query(2*si, ss, mid, qi, qe);
	int r= query(2*si+1, mid+1,se, qi, qe);	

	return min(l,r);
}

void update(int si, int ss, int se, int qi)
{
	if(ss==se)
	{
		st[si]=arr[ss];
		return;
	}
	int mid = (ss+se)/2;
	if(qi<=mid)
		update(2*si, ss, mid, qi);
	else
		update(2*si+1, mid+1, se, qi);


	st[si]= min(st[2*si], st[2*si+1]);

}


int main()
{
   
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
  



int n;cin>>n;
for(int i=1;i<=n;i++)
	cin>>arr[i];
build(1,1,n);


tc{
int qi,qe;cin>>qi>>qe;
cout<<query(1,1,n,qi+1,qe+1)<<endl;
arr[1]=-4;
update(1,1,n,2);
cout<<"after update: "<<query(1,1,n,qi+1,qe+1)<<endl;

}

return 0;
}

