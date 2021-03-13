#include<bits/stdc++.h>
using namespace std;

int acc(string s1,string s2)
{
	return s1.compare(1,s1.size(),s2,1,s2.size());
}
int main()
{
   #ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output.txt","w", stdout);
   #endif
int t;cin>>t;while(t--)
{
int n;cin>>n;
set<string> s;
vector<string> v(n),s1;
map<string,vector<char>> m;
for(int i=0;i<n;i++)
{
	string x,p;
	cin>>x;
	p= x.substr(1,x.size()-1);
	m[p].push_back(x[0]);
	s.insert(p);
}
for(auto x:s)
	s1.push_back(x);

// for(auto x:m)
// {
// 	cout<<x.first<<"-> [ ";
// 	for(auto z:x.second)
// 		cout<<z<<", ";
// 	cout<<"]\n";

// }




}
}