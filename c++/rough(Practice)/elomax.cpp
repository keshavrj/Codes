#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define Vi vector<vector<int>>
#define vpi vector<pair<int,int>>
#define dsortA(arr) sort(arr.begin(), arr.end(), greater<pair<int,int>>())
#define pi pair<int,int>
#define pb push_back
#define pl pair<ll,ll>
long double EPS = 1e-9;
int main()
{
int n,t,x,y,m,k;cin>>t;
while(t--){

        cin>>n>>m;
        int A[n][m],B[m][n];
        vi R(n,0),maxR(n,0),maxF(n,0);
        vpi ans;
        for(int i=0;i<n;i++) cin>>R[i];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>A[i][j];


        for(int i=0;i<n;i++)
            for(int j=1;j<m;j++)
                A[i][j]+=A[i][j-1];

           for(int i=0;i<n;i++)
            {
                x=A[i][0];
                 for(int j=1;j<m;j++)
                    if(A[i][j]>x)
                    {
                        maxR[i]=j;
                        x=A[i][j];
                    }
            }
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
                B[i][j]=0;
                ans.pb({R[j]+A[j][i],j});
            }
            dsortA(ans);
            //for(pi p:ans){cout<<p.first<<" "<<p.second<<" ";}
            x=ans[0].first;y=1;
            for(int j=0;j<n;j++)
            {
                if(x>ans[j].first)
                {
                        x=ans[j].first;
                        B[i][ans[j].second]=j+1;
                        y=j+1;
                        continue;
                }
                B[i][ans[j].second]=y;
            }
            ans.clear();
        }
        for(int j=0;j<n;j++)
        {
            x=B[0][j];
            for(int i=1;i<m;i++)
            {
                if(B[i][j]<x)
                {
                    maxF[j]=i;
                    x=B[i][j];
                }
            }

        }

    int res=0;
   for(int i=0;i<n;i++)
            if(maxR[i]!=maxF[i])
                res++;
        cout<<res<<"\n";
    }
    return 0;
}
