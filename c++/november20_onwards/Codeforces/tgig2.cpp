#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
using namespace std;
vector<bool> prime(1000001,1);
int prime_cnt[1000001];
void sieve()
{
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i*i<=1000000;i++)
    {
    if(prime[i]==1) {
       for(int j=i*i;j<=1000000;j+=i)// selecting all multiples
         prime[j]=0;
        }
    }
for(int i=1;i<=1000000;i++){
    if(prime[i]==1)
        prime_cnt[i]= prime_cnt[i-1]+1;
    else
        prime_cnt[i]= prime_cnt[i-1];}

}



int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);    
    // freopen("input1.txt","r",stdin);freopen("output1.txt","w",stdout);
    sieve();
    tc{
        int l,r;cin>>l>>r;
        int cnt= prime_cnt[r]-prime_cnt[max(l-1, 0)];
        if(cnt==0)
            cout<<-1<<endl;
        else
        {   int high=-1,low=-1;
            for(int i=r;i>=l;i--)
                if(prime[i])
                {
                    high=i;
                    break;
                }
            for(int i=l;i<=r;i++)
                if(prime[i])
                {
                    low=i;
                    break;
                }
            cout<<high-low<<endl;
        }
    }

}