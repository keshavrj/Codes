#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int n;
	cin>>n;
	lli a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	sort(a,a+n);
	bitset<31> b[n];
	for(int i=0;i<n;i++)
	   b[i]=a[i];

	   for(auto x:b)
        cout<<x<<" ";
       cout<<endl;


    int lp,up,flag=0;


    for(int i=30;i>=0;i--)
    	{for(int j=0;j<n-1;j++)
    		{if(b[j][i]!=b[j+1][i])
    			{flag=1;
    			lp=j;
    			up=j+1;
    			break;}}
	if(flag==1)
		 break;}

		 cout<<lp<<"  "<<up<<endl;
  lli mini=10000000000;
	for(int i=up;i<n;i++)
	{
	 	for(int j=0;j<=lp;j++)
			mini=min(mini,a[i]^a[j]);
	 }
	cout<<mini<<"\n";
	return 0;
}
