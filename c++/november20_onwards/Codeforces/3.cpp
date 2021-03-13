#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define umap unordered_map
#define pi 3.141592653589793
using namespace std;

void solve()
{
	double r1,r2,s1,s2,t,d;cin>>r1>>r2>>s1>>s2>>t>>d;
	if(r1+r2<d)
	{
		cout<<"no crash";
		return;
	}

	double x=  ((r1*r1) - (r2*r2) + (d*d))/(2*d);
	double theta1= 2*acos((double)x/r1), theta2= 2*acos((d-x)/r2);
	double arc1= r1*theta1, arc2= r2*theta2;
	double a= 2*pi*r1/s1   , b= 2*pi*r2/s2 ;
	int ii=1;
	map<int,int> E,F;
	if(s1>0)
	{
	while(true)
	{

	if(a*ii<=t)
		E[(int)(a*ii)]++;
	else break; 
	ii++;

	}
	ii=0;
	while(true)
	{
		double z= (b*ii+(arc2/s2));
		if(z<=t)
		{
			E[(int)z]++;
			if(E[(int)z]>1 && (r1+r2!=d))
				{cout<<(int)z<<" E"<<endl;return;}
			else if(E[(int)z]>1 && (r1+r2==d))
				{cout<<(int)z<<" E&F"<<endl;return;}
		}
	else break; 
	ii++;
	}

	ii=0;
	while(true)
	{
	double z= (a*ii+(arc1/s1));
	if(z<=t)
		F[(int)z]++;
	else break;
	ii++;
	}

	ii=1;
	while(true)
	{
	double z= (b*ii);
	if(z<=t)
		{F[(int)z]++;
		if(F[(int)z]>1 && (r1+r2!=d))
			{cout<<(int)z<<" E"<<endl;return;}
		else if(F[(int)z]>1 && (r1+r2==d))
			{cout<<(int)z<<" E&F"<<endl;return;}
		}


	else break; 
	ii++;
	}



	cout<<"no crash\n";

	}


}
int main()
{
	fastio;

freopen("input1.txt","r",stdin);
freopen("output1.txt","w",stdout);

solve();
}