#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}

int main(int argc, char const *argv[])
{
   int n, key, maxn;
   unordered_map<int,int> mp;

   cin>>n;

   for (int i=0; i<n; i++)
   {
     cin>>key;
     mp[key]++;
   }

   maxn = max_element(mp.begin(), mp.end(), compare)->first;

   cout<<maxn<<endl;

   return 0;
 }
