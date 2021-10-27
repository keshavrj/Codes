#include<bits/stdc++.h> 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n" 
using namespace std;
int parent[100005], Rank[100005];

int find_set(int v)
{
	 if (parent[v]==v)
        return v;
    return parent[v] = find_set(parent[v]); // with path compression
}


void merge(int a, int b) //union function
{
	a= find_set(a), b= find_set(b);
	if(a==b)return; // if parent are same;

	if(Rank[a]>Rank[b])
	{
		parent[b]= a;
		Rank[a]+=Rank[b];
	}

	else
	{
		parent[a]= b;
		Rank[b]+=Rank[a];
	}

}



int main()
{
 #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
    #endif

        fastio;
	int n,m;
	cin>>n>>m;

	for(int i=0;i<=n;i++)
	{
		parent[i] = i;
		Rank[i]= 1; // size of each set
	}

	for(int i=0;i<m;i++)
	{
		int a, b;cin>>a>>b;
		merge(a,b);
	}

	


}
