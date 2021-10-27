#include<bits/stdc++.h> 
using namespace std;
int dist[10001];
bool vis[10001];
vector<int> primes, adj[10001];

bool isvalid(int a, int b)
{
	int cnt=0;
	while(a>0)
	{
		if(a%10!=b%10)
			cnt++;
		a/=10, b/=10;
	}
	return (cnt==1);
}
bool isprime(int a)
{
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
			return false;
	
	return true;
}
void buildgraph()
{
	
	for(int i=1000;i<=9999;i++)
		{
			if(isprime(i))
				primes.push_back(i);
		}
	
	
	for(int i=0;i<primes.size();i++)
	{
		for(int j=i+1;j<primes.size();j++)
		{
			int a= primes[i];
			int b= primes[j];
			if(isvalid(a, b))
				{
					adj[a].push_back(b);
					adj[b].push_back(a);
				}
		}
	}
	
}
void bfs(int s)
{
	queue<int> q;
	q.push(s);
	vis[s]=1;
	dist[s]=0;
	
	while(!q.empty())
	{
		int t= q.front();
		q.pop();
		for(int child: adj[t])
			{
				if(!vis[child])
				{
					vis[child]=1;
					dist[child]= dist[t]+1;
					q.push(child);
				}
			}
	}
}

int main()
{
	// freopen("input1.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	
	
	buildgraph();
	int t;cin>>t;
	while(t--)
	{
		int s, d;
		cin>>s>>d;
		for(int i=1000;i<=10000;i++)
		{
			dist[i]=-1;
			vis[i]=0;
		}
		
		
		bfs(s);
		if(dist[d]==-1)
			cout<<"Impossible\n";
		 cout<<dist[d]<<"\n";

		
	}
}
