// find unique elements in a given range

#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc long t;cin>>t;while(t--)
using namespace std;

struct Query{
	int l;
	int r;
	int idx;
};

Query Q[200002];
int arr[300005], freq[1000005], ans[200002], blk=555;
int cnt=0;

bool comp(Query a, Query b)
{
	if(a.l/blk != b.l/blk)
	{
		return a.l/blk < b.l/blk ;		
	}
	return a.r/blk < b.r/blk;
}
void add(int a)
{
	freq[a]++;
	if(freq[a]==1)
		cnt++;
}

void remove(int a)
{
	freq[a]--;
	if(freq[a]==0)
		cnt--;
}


int main()
{

	 #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
    #endif
	int n;cin>>n;

	for(int i=0;i<n;i++)
		cin>>arr[i];
	blk= sqrtl(n);
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{		cin>>Q[i].l>>Q[i].r;

			Q[i].l--, Q[i].r--;
			Q[i].idx = i;
	}

	
	sort(Q, Q+t, comp);



	int ml=0, mr=-1;
	for(int i=0;i<t;i++)
	{
		int L= Q[i].l;
		int R= Q[i].r;

		//Expansion
		while(ml>L)
		{
			ml--;
			add(arr[ml]);
		}
		while(mr<R)
		{
			mr++;
			add(arr[mr]);
		}
		// conotraction
		while(mr>R)
		{
			remove(arr[mr]);
			mr--;
		}
		while(ml<L)
		{
			remove(arr[ml++]);
		}

		ans[Q[i].idx]=cnt;

	}
	for(int i=0;i<t;i++)
		cout<<ans[i]<<endl;

}