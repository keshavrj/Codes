#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;
int main()
{
   fastio;

tc{
	int n;cin>>n;
	char g[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>g[i][j];

	if(g[0][1]=='0' && g[1][0]=='0' && g[n-2][n-1]=='0' && g[n-1][n-2]=='0')
		{
			cout<<2<<endl<<n-1<<" "<<n<<endl<<n<<" "<<n-1<<endl;
		}
	
	else if(g[0][1]=='1' && g[1][0]=='1' && g[n-2][n-1]=='1' && g[n-1][n-2]=='1')
		{
			cout<<2<<endl<<n-1<<" "<<n<<endl<<n<<" "<<n-1<<endl;
		}

	else if(g[0][1]=='1' && g[1][0]=='1' && g[n-2][n-1]=='0' && g[n-1][n-2]=='0')
		{
			cout<<0<<endl;//<<n-2<<" "<<n-1<<endl<<n-1<<" "<<n-2<<endl;
		}

	else if(g[0][1]=='0' && g[1][0]=='0' && g[n-2][n-1]=='1' && g[n-1][n-2]=='1')
		{
			cout<<0<<endl;//<<n-2<<" "<<n-1<<endl<<n-1<<" "<<n-2<<endl;
		}

		else if((g[0][1] != g[1][0]) && (g[n-1][n-2]!=g[n-2][n-1]))
		{
			cout<<2<<endl;

			if(g[0][1]=='1')
				cout<<1<<" "<<2<<endl;
			else cout<<2<<" "<<1<<endl;

			if(g[n-1][n-2]=='1')
				cout<<n-1<<" "<<n<<endl;
			else
				cout<<n<<" "<<n-1<<endl;
		}
		else if((g[0][1] != g[1][0])  && (g[n-1][n-2]==g[n-2][n-1]))
		{
			cout<<1<<endl;
			if(g[n-1][n-2]=='1')
			{
				if(g[0][1]=='1')
					cout<<1<<" "<<2<<endl;
				else
					cout<<2<<" "<<1<<endl;
			}
			else
			{
				if(g[0][1]=='1')
					cout<<2<<" "<<1<<endl;
				else
					cout<<1<<" "<<2<<endl;
			}
			

		}
		else if((g[0][1] == g[1][0])  && (g[n-1][n-2]!=g[n-2][n-1]))
		{

			cout<<1<<endl;
			if(g[0][1]=='1')
			{
				if(g[n-2][n-1]=='1')
					cout<<n<<" "<<n-1<<endl;
				else
					cout<<n-1<<" "<<n<<endl;
			}
			else
			{
				if(g[n-2][n-1]=='1')
					cout<<n<<" "<<n-1<<endl;
				else
					cout<<n-1<<" "<<n<<endl;
			}
			
		}
		
}

return 0;
}

