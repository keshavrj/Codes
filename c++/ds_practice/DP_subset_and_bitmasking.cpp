#include<bits/stdc++.h>
using namespace std;

int main()
{

	freopen("input1.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;cin>>t;
	while(t--)
	{
		int arr[4];
		bool flag=1;
		for(auto &x:arr)cin>>x;

		for(int p=1;p<16;p++)
		{
			int sum=0;
			for(int i=0;i<4;i++)
			{
				int f=1<<i;
				if(p&f)
					sum+=arr[i];
			}
			if(sum==0)
			{
				flag=0;
				cout<<"Yes\n";
				break;
			}

		}
		if(flag)
			cout<<"No\n";



	}
}