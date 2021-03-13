#include<bits/stdc++.h>
using namespace std;
string ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen",
            "fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred"};


string text(int n)
{
string ans="";
  if(n>19)
    ans+=tens[n/10]+ones[n%10];
  else ans+=ones[n];
 return ans;
}


int main()
{
int n;cin>>n;
int arr[n];
  for(auto &x:arr)
    cin>>x;
long cnt=0,ans=0;
char vowel[5]={'a','e','i','o','u'};
for(int i=0;i<n;i++)
{
   string texted=text(arr[i]);
  for(int j=0;j<5;j++)
	  cnt+=count(texted.begin(),texted.end(),vowel[j]);
}
for(int i=0;i<n-1;i++)
{
  for(int j=i+1;j<n;j++){
  	if(arr[i]+arr[j]==cnt)ans++;
	}
}
if(ans==0) cout<<"zero";
else if(ans>100) cout<<"greater 100";
else cout<<text(ans);

return 0;
}

