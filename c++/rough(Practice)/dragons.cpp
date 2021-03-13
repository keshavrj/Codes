#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    ll N,q;
    cin>>N>>q;
    bool flag=1,flag1=1,flag2=1;
    ll h[N],a[N];
    for(ll i=0;i<N;i++)
        cin>>h[i];
    for(ll i=0;i<N;i++)
        cin>>a[i];
while(q--)
{
                ll queries[3];
                for(auto &x:queries)
                    cin>>x;
                    if(queries[0]==1)
                        a[queries[1]-1]=queries[2];
                    else if(queries[0]==2)
                    {
                    ll b=queries[1]-1;
                    ll c=queries[2]-1;
                    if(h[b]<h[c])
                        flag=0;
                    else if(h[b]>h[c]){
                    if(b<c)
                    for(ll i=b+1;i<=c;i++)
                        if(h[i]>=h[b])
                    {
                        flag=0;
                        break;
                    }


                    if(b>c)
                    for(ll i=b-1;i>=c;i--)
                        if(h[i]>=h[b])
                    {
                        flag=0;
                        break;
                    }
                    }



                    if(h[b]>h[c] && flag!=0)
                    {
                        ll ccount=0;
                        if(b>c)
                        {

                        for(ll i=b;i>c;i--)
                            {
                                flag2=1;
                                for(ll j=i-1;j>c;j--)
                                {
                                    if(h[i]<h[j]  || h[i]<h[c])
                                    flag2=0;
                                }

                                if(flag2)
                                    ccount+=a[i];
                        }ccount+=a[c];
                        cout<<ccount<<endl;

                        }
                         if(b<c)
                          {
                        for(ll i=b;i<c;i++)
                            {
                                 flag1=1;
                                for(ll j=i+1;j<c;j++)
                                {
                                    if(h[i]<h[j]  || h[i]<h[c])
                                flag1=0;
                                }
                                 if(flag1)
                                    ccount+=a[i];
                            }
                        ccount+=a[c];
                        cout<<ccount<<endl;
                        }
                    }
                    if(h[b]==h[c]  && b==c)
                    { ll ccount=0;
                        ccount+=a[b];
                        cout<<ccount<<endl;
                    }
                    if(!flag)
                        cout<<-1<<endl;


}
}
return 0;
}
