#include<bits/stdc++.h>
using namespace std;
int cnt1(int n)
{
int cnt=0;
  while(n)
  {  n&=(n-1);
  	cnt++;
  }
return cnt;
}
int cnt0(int maxx,int x)
{
int zeroes= (32-__builtin_clz(maxx) ) - cnt1(x);
  return zeroes;
}

int main()
{
int n;cin>>n;
  int arr[n];
  for(auto &x:arr)cin>>x;
int ans=0;
vector<int> anss;
int maxelem= *max_element(arr,arr+n);
int ansdig=(32- __builtin_clz(maxelem));
  int total=1<<n;
  for(int i=1;i<total;i++)
  {
    int sum1=0;
    int sum0=0;
  	for(int j=0;j<n;j++)
    {
    	int f=1<<j;
      if(f & i)
      {
          sum1+=cnt1(arr[j]);
      	sum0+=cnt0(maxelem,arr[j]);
      }
    }
    if(sum1==sum0)ans++;
  }
for(int i=0;i<ansdig;i++)
{
 anss.push_back(ans%2);
 ans/=2;
}
for(int i=anss.size()-1;i>=0;i--)
    cout<<anss[i];
return 0;
}
