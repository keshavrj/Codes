#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input1.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string s;
	getline(cin,s);
	stringstream ssx(s);
	int x=0;
	vector<int> arr;
	while(ssx>>x)  
	{
		arr.push_back(x);
	}
	
	for(auto z:arr)cout<<z<<" ";
}
