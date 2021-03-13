#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define vi vector<int>
#define vll vector<ll>
using namespace std;
int main()
{
fastio;
tc{
    int n;cin>>n;
    vll arr(n);
    bool flag=1;
    for(auto &x:arr)
    {cin>>x;
    if(x>0) flag = false;
    }
    if(flag) {cout<<1<<" "<<1<<endl;   continue;}

        int bc=6, wc= 1;
/*if(n==3){

for(ll i=0;i<n;i++)
{
    ll cnt=1;
        for(ll j=i+1;j<n;j++)
            if(arr[i]>arr[j])
                cnt++;
        for(ll j=0;j<i;j++)
            if(arr[j]>arr[i]) cnt++;

        bc= min(bc, cnt);
        wc=max(wc, cnt);

}

cout<<bc<<" "<<wc<<endl;
}*/
//else{
        for(int i=0;i<n;i++)
        {
              int inf[n]= {0} ;
              float inf_time[n]={0};
              inf[i]=1;
        for(ll j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    inf[j]=1;
                    inf_time[j]=float(j-i)/(arr[i]-arr[j]);
                }
            }
        for(ll j=0;j<i;j++)
            {
                if(arr[j]>arr[i])
                {
                    inf[j]=1;
                    inf_time[j]=float(i-j)/(arr[j]-arr[i]);
                }
            }

            for(int m=0;m<n;m++)
            {
                if(inf[m] && m!=i)
                {

                    for(ll j=i+1;j<n;j++)
                    {
                      if(arr[m]>arr[j])
                      {
                            float t= float(j-m)/(arr[m]-arr[j]);
                            if(t>inf_time[m])
                                inf[j]=1;
                      }
                    }

                    for(ll j=0;j<i;j++)
                    {
                        if(arr[j]>arr[m])
                            {
                            float t= float(m-j)/(arr[j]-arr[m]);
                            if(t>inf_time[m])
                                inf[j]=1;
                            }
                    }

                }
            }
            bc= min(bc, count(inf, inf+n , 1));
            wc= max(wc, count(inf, inf+n , 1));

        }
cout<<bc<<" "<<wc<<endl;
//}
}
return 0;
}
