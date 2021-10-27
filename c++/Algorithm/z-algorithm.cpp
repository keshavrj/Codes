#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> z_function(string s)
{
	int n= s.size();
	vector<int> z(n,0);

	int l=0, r=0;
	for(int i=1;i<n;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<n && s[r]==s[r-l])
				r++;
			z[i]=r-l;
			r--;
		}
		else
		{
			int k= i-l;
			//if z[k]+i<=r : L-R box ke andar hi bound rhe tb to koi dikkat nhi 
			if(z[k]+i<=r)
					z[i]=z[k];

			else
			{
				l=i;
				while(r<n && s[r]==s[r-l])
					r++;
				z[i]=r-l;
				r--;
			}
		}
	}
		return z;
}


int main()
{
     
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
 	
 	string text = "ramashishsinghrakaram";
 	string pattern = "ram";
 	
 	vector<int> z= z_function(pattern+text);
 	for(int i=0;i<z.size();i++)
 		if(z[i]==pattern.length())
 			cout<<i-pattern.length()<<" ";

 	cout<<endl;

 }