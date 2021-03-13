#include<bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define For(a,n,xx) for(int xx=a;xx<n;xx++)
#define ll long long int
using namespace std;
int main()
{
    //ios_base :: sync_with_stdio(false);
int t;cin>>t;
while(t--)
{
   int n,m,x,y,sum=0;
   cin>>n>>m>>x>>y;
   int a[n][m];
   if(n==1 && m==1)
            cout<<x<<endl;
   else{
   For(0,n,i)
   {
       For(0,m,j)
       {
           if(y>=x && y<=2*x)
           {if((i+j)%2==0)
                a[i][j]=x;
            else
                a[i][j]=y-x;}
           else if(y>2*x)
                        a[i][j]=x;

           else if(y<x)
           {
             if((i+j)%2==0)
                a[i][j]=y;
            else
                    a[i][j]=0;
           }
           sum+=a[i][j];
       }
   }
cout<<sum<<endl;
}
}

    return 0;
}

/*method 2
#include <bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    int t;cin>>t;
   while(t--)
   {
       int n,m,x,y;
       cin>>n>>m>>x>>y;
       int  blocks = n*m;
       int ans;
       if(n==1 && m==1)
           ans=x;

       else if(x>=y)
           ans= ((blocks+1)/2)*(y);

       else
       {
           ans=((blocks+1)/2)*(x);
           ans+=(blocks-((blocks+1)/2))*(min(x,y-x));
       }
       cout<<ans<<endl;
   }

}*/

