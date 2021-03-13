#include<bits/stdc++.h>
using namespace std;
int arr[100005], st[400020], lazy[400020];

void build(int si, int ss, int se)
{
	if(ss==se)
	{
		st[si]=arr[ss];
		return;
	}
	int mid=(ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);

	st[si]= st[2*si]+st[2*si+1]; // range sum ;
}

void update(int si, int ss, int se, int l, int r, int val)
{

	if(lazy[si]!=0)
	{
		int t= lazy[si];
		lazy[si]=0;
		st[si]+= t*(ss-se+1);
		if(ss!=se)
			lazy[2*si]+=t, lazy[2*si+1]+=t;

	}
	if(ss>r || se<l)
		return; // outside ;
	if(ss>=l && se<=r)
	{
		int t= val*(se-ss+1);
		st[si]+=t;
		if(ss!=se)
			lazy[2*si]+=val,lazy[2*si+1]+=val; 
		return;
	}
	int mid = (ss+se)/2;
	update(2*si, ss, mid, l,r, val);
	update(2*si+1, mid+1, se, l, r, val);
	st[si]= st[2*si]+st[2*si+1];

	

}

int query(int si, int ss, int se, int l, int r)
{
	if(lazy[si]!=0)
	{
		int t= lazy[si];
		lazy[si]=0;
		st[si]+= t*(se-ss+1);
		if(ss!=se)
			lazy[2*si]+=t, lazy[2*si+1]+=t;

	}
	if(ss>r || se<l)
		return 0; // outside ;
	if(ss>=l && se<=r)
	{
		return st[si];
	}
	int mid = (se+se)/2;
	int ll= query(2*si, ss, mid, l, r);
	int rl= query(2*si+1,mid+1, se, l, r);
	return ll+rl;

}

int main()
{
	freopen("input1.txt", "r", stdin);
	freopen("output.txt","w", stdout);

	int n;cin>>n;
	for(int i=1;i<=n; i++)
		cin>>arr[i];

	build(1,1,n);

	int q;cin>>q;
	while(q--)
	{
	int type, l,r;
	cin>>type;

	if(type==0)
	{
		int val;cin>>val;
		cin>>l>>r;
		update(1,1,n,l,r,val);
	}
	else
	{
		cin>>l>>r;
		cout<<"sum in range is: "<<query(1,1,n,l,r)<<endl;
	}
	}		
}