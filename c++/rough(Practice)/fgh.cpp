// CPP program f
#include<bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	freopen("input1.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string s;//= "12 35 4 78 999";
	getline(cin,s);
	stringstream ssx(s);
		int x=0;
		vector<int> arr;
	while(ssx>>x)  
	{
		arr.push_back(x);
		cout<<x<<":"<<" "<<typeid(x).name()<<", ";
	}
	cout<<endl<<"vector contents: ";
	for(auto z:arr)cout<<z<<" ";
}
