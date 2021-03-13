#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

string txt,pat;
bool match(int l, int r)
{
	for(int i=0;i<pat.size();i++)
		if(txt[l+i]!=pat[i])return 0;

 	return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    fastio;
	getline(cin, txt);
	getline(cin, pat);

	for(int l=0, r= pat.size()-1;r<txt.size();l++,r++)
	{
		if(match(l,r))
			cout<<l<<" ";
	}

}

