#include <bits/stdc++.h>
#define tc long t;cin>>t;while(t--)
using namespace std;
int main()
{
	tc{

	    string s,  p;
	    string  x="",  z="",  previ="",  later="";
	    cin>>s>>p;
	     bool flag=0;
	    unordered_map<char,int> m;
	    for(int i=0;i<p.size();i++)
	        {
	            m[p[i]]++;
	            if(m[p[i]]<=1)
	               z+=p[i];
	        }
	    for(int i=0;i<s.size();i++)
	    {
            if(m[s[i]]>0) m[s[i]]--;
	        else  x+=s[i];
	    }
	    sort(x.begin(),x.end());// sorting the newly obtained (after removing char of p) string.
        if(z[0]>z[1]) flag=1;

	   for(int i=0;i<x.size();i++)
	   {
	       if(x[i]<p[0]  || (x[i]==p[0] && flag==0) )
	            previ+=x[i];
	       else
	            later+=x[i];
	   }
	   cout<< previ+p+later <<"\n";


}
        return 0;
}









  //else if(x[i]>p[0]     )
	           // later+=x[i];
	     //  else if(x[i]==p[0] && flag==0)
	        //    previ+=x[i];
