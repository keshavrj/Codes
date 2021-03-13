#include<bits/stdc++.h>
using namespace std;

struct node
{
	int arr[3];
};
node st[400020];
int lazy[400020];

void shift(int si)
{
	int t= st[si].arr[2];
	st[si].arr[2]=st[si].arr[1];
	st[si].arr[1]=st[si].arr[0];
	st[si].arr[0]=t;
}

void build(int si, int ss, int se)
{
	if(ss==se)
	{
		st[si].arr[0]=1;
		st[si].arr[1]=0;
		st[si].arr[2]=0;
		return;
	}
	int mid=(ss+se)/2;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);

		st[si].arr[0]= st[2*si].arr[0]+ st[2*si+1].arr[0];
		st[si].arr[1]= st[2*si].arr[1]+ st[2*si+1].arr[1];
		st[si].arr[2]= st[2*si].arr[2]+ st[2*si+1].arr[2];	
}

void update(int si, int ss, int se, int l, int r)
{

	if(lazy[si]!=0)
	{
		int t= lazy[si];
		lazy[si]=0;
		if(ss!=se)
		{
			lazy[2*si]+=t;
			lazy[2*si+1]+=t;
		}

		t%=3;
		for(int i=0;i<t;i++)
			shift(si);
	}

	if(ss>r || se<l)
		return; // outside ;
	if(ss>=l && se<=r)
	{
		shift(si);
		if(ss!=se)
		{
			lazy[2*si]++;
			lazy[2*si+1]++;
		}		
		return;
	}
	int mid = (ss+se)/2;
	update(2*si, ss, mid, l,r);
	update(2*si+1, mid+1, se, l, r);

		st[si].arr[0]= st[2*si].arr[0]+ st[2*si+1].arr[0];
		st[si].arr[1]= st[2*si].arr[1]+ st[2*si+1].arr[1];
		st[si].arr[2]= st[2*si].arr[2]+ st[2*si+1].arr[2];	
	

}


int query(int si, int ss, int se, int l, int r)
{
	if(lazy[si]!=0)
	{
		int t= lazy[si];
		lazy[si]=0;
		if(ss!=se)
		{
			lazy[2*si]+=t;
			lazy[2*si+1]+=t;
		}

		t%=3;
		for(int i=0;i<t;i++)
			shift(si);
	}

	if(ss>r || se<l)
		return 0; // outside ;
	if(ss>=l && se<=r)
	{
		return st[si].arr[0];
	}
	int mid = (ss+se)/2;
	int ll= query(2*si, ss, mid, l, r);
	int rl= query(2*si+1,mid+1, se, l, r);
	return ll+rl;

}

int main()
{
	freopen("input1.txt", "r", stdin);
	freopen("output.txt","w", stdout);

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,q;cin>>n>>q;
	build(1,1,n);
	while(q--)
	{
	
	int type, l,r;
	cin>>type>>l>>r;

	if(type==0)
		update(1,1,n,l+1,r+1);
	
	else
		cout<<query(1,1,n,l+1,r+1)<<"\n";
	}		
}