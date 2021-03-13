#include<bits/stdc++.h>
using namespace std;
int arr[100005];
// {odd,even};
pair<int,int> st[400020];
void build(int si, int ss, int se)
{
	if(ss==se)
		{
			if(arr[ss]&1)
				st[si]={1,0};
			else st[si]={0,1};

			return;
		}
	int mid = (ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	st[si].first = st[2*si].first + st[2*si+1].first;
	st[si].second = st[2*si].second + st[2*si+1].second;


}
void update(int si, int ss, int se, int qi , int val)
{
	if(ss==se)
	{
		if(arr[ss]&1)// if the current val is odd
			st[si]={0,1};// new value will be even i.e. why.
		else st[si]= {1,0};
		arr[ss]= val;
		return;
	}
	int mid = (ss+se)/2;
	if(qi<=mid)
	update(2*si, ss, mid, qi, val);
	else update(2*si+1, mid+1, se, qi , val);

	st[si].first  = st[2*si].first + st[2*si+1].first;
	
	st[si].second = st[2*si].second + st[2*si+1].second;
}

int query(int si,int ss,int se,int qs, int qe, int code)
{
	if(qe<ss || qs>se)return 0;
	if(ss>=qs && se<=qe)
	{
		if(code==1)
		return st[si].second;
		else return st[si].first;
	}
	int mid = (ss+se)/2;
	 return query(2*si, ss, mid, qs, qe, code) 
	 			+ query(2*si+1, mid+1, se, qs, qe, code);


}
int main()
{

// freopen("input1.txt", "r", stdin);
// freopen("output1.txt", "w", stdout);

int n;cin>>n;
int q;
for(int i=1;i<=n;i++)cin>>arr[i];
build(1,1,n);
cin>>q;
while(q--)
{
int c,a,b;
cin>>c;
if(c==0)
{
	cin>>a>>b;
	if(arr[a]%2==b%2)continue;// if parity is same then no need to change ;
	else update(1,1,n,a,b);
}
else
{
	cin>>a>>b;
	int ans= query(1,1,n,a,b,c);
	cout<<ans<<endl;
}
}
}