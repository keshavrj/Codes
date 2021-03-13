#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
    int n,c,t;cin>>t;
    while(t--)
    {
        cin>>n>>c;
        string arr;
        getline(cin,arr);
        set<char>s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
            int ans=c-s.size();
            int value =min(c,ans);
            if (value<0)cout<<0<<endl;
            else cout<<value<<endl;


    }
	return 0;
}
