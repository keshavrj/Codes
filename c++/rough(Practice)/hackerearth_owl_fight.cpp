#include<bits/stdc++.h> 
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n" 
using namespace std;
int parent[100005];

int find_set(int v)
{
	 if (parent[v]<0)
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_(int a, int b)
{
	parent[a]= min(parent[a], parent[b]); // we are making a as parent
	parent[b]= a;
}



int main()
{
 #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
    #endif

        fastio;
	int n,m;cin>>n>>m;
	for(int i=0;i<=n;i++)
	{
		parent[i] = -i;
	}
	for(int i=0;i<m;i++)
	{
		int a, b;cin>>a>>b;
		// if(b>a)swap(a,b);
		a= find_set(a), b= find_set(b);
		if(a!=b)
			union_(a,b);

	}

	// for(int i=1;i<=n;i++)
	// 	cout<<parent[i]<<" ";
	// cout<<endl;
	int q;cin>>q;
	while(q--)
	{
		int a, b;cin>>a>>b;
		int para = find_set(a);
		int parb= find_set(b);
		if(para==parb)
			cout<<"TIE\n";
		else{
			// cout<<"para= "<<para<<"  parb= "<<parb<<endl;
			if(parent[para]<parent[parb])
				cout<<a<<endl;
			else cout<<b<<endl;
		}

	}


}
