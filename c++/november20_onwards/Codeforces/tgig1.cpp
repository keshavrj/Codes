#include <bits/stdc++.h>
using namespace std;
int main()
{
 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);	
	// freopen("input1.txt","r",stdin);freopen("output1.txt","w",stdout);
    string s;cin>>s;
    long t;cin>>t;while(t--){
        string x;cin>>x;
        int i=0, n=x.length();
        for(int j=0;j<s.length() && i<n;j++)
            if(x[i]==s[j])
	            i++;

        i==n?cout<<"POSITIVE\n":cout<<"NEGATIVE\n";
    }
}