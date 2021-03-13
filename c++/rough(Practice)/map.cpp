#include<bits/stdc++.h>
using namespace std;
int main()
{
    int64_t t;
    cin>>t;
 while(t--)
 {
    bool flag=1;
     int64_t n;
     cin>>n;
     int64_t a[n];
     int64_t b[n];
     int64_t mincost=0;
     unordered_map<int64_t,int64_t> map1,map2,map3;
     vector<int64_t> v1,v2;
     for(auto &i:a)
     {cin>>i;
         map1[i]++;}
     for(auto &i:b)
     {cin>>i;
         map1[i]++;}


    int64_t mint=min(*min_element(a,a+n),*min_element(b,b+n));
    for(auto i: map1)
    {
    if(i.second%2==1)
    {
        flag=0;
        break;
    }
    else
        map2[i.first]=i.second/2;
    }

    if(flag==0)
        cout<<-1<<"\n";



    else
    {

	       map3=map2;
	       for(int64_t i=0;i<n;i++)
	       {
	           if(map2[a[i]])
	           map2[a[i]]--;
	           else
	           v1.push_back(a[i]);
	       }

	       for(int i=0;i<n;i++)
	       {
	           if(map3[b[i]])
	           map3[b[i]]--;
	           else
	           v2.push_back(b[i]);
	       }


            if(v1.size()==0)
             cout<<0<<endl;

            else{
                    sort(v1.begin(),v1.end());
                    sort(v2.begin(),v2.end(),greater<int64_t>());

                    for(int i=0;i<v1.size();i++)
                        cout<<v1[i]<<"\t"<<v2[i]<<"\n";
                for(int i=0;i<v1.size();i++)
                mincost+=min(2*mint,min(v1[i],v2[i]));

                cout<<mincost<<endl;
            }
}

}
    return 0;
}
