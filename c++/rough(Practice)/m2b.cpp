#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,pairs=0;
    cin>>n;
int arr[n],bitscore[n][2];
for(auto &x:arr)
        cin>>x;

    for(int i =0;i<n;i++)
    {
       int x=arr[i];
       vector<int> v;
       while(x)
       {
           v.push_back(x%10);
           x=x/10;
       }
       sort(v.begin(),v.end());
       int score = (v[0]*7 + v[2]*11);
       score=score%100;
       bitscore[i][1]=score%10;
       bitscore[i][0]=score/10;
   }


   int sett[10];
   memset(sett,0,sizeof(sett));

   for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
       {
           if((i%2)!=(j%2))
            continue;
           if(bitscore[i][0]==bitscore[j][0] && sett[bitscore[i][0]]<2)
            {
                pairs++;
                sett[bitscore[i][0]]++;
            }
       }


cout<<pairs;
    return 0;
}
