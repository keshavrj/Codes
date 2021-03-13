#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
ll n;
void solve(vector<ll> arr[], vector<ll> big[], map<ll,ll> freq)
{
    ll ans=0;
    map<pair<ll,ll>,ll> hit;
        ll x[n]={0};
        
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<arr[i].size();j++)
            {
                hit[{i,arr[i][j]}]=0;
                if(arr[i][j]>0 && freq[abs(arr[i][j])]==1)x[i]++;
            }
            ll k=0;
            while(arr[i][k]<0 && k<arr[i].size())
            {
                if(k==0)
                {
                   if(freq[abs(arr[i][k])]>1)
                        hit[{i,arr[i][k]}]=1;
                   else
                   hit[{i,arr[i][k]}]=0;
                   k++;
                   continue;
                }
                if(freq[abs(arr[i][k])]>1)
                    hit[{i,arr[i][k]}]=hit[{i,arr[i][k-1]}] + 1;
                else
                    hit[{i,arr[i][k]}] = hit[{i,arr[i][k-1]}];
                k++;
            }
            k=arr[i].size()-1;
            while(arr[i][k]>0 && k>=0)
            {
                if(k==(arr[i].size()-1))
                {
                   if(freq[abs(arr[i][k])]>1)
                      hit[{i,arr[i][k]}]=1;
                   else
                      hit[{i,arr[i][k]}]=0;
                   k--;
                   continue;
                }
                if(freq[abs(arr[i][k])]>1)
                    hit[{i,arr[i][k]}]=hit[{i,arr[i][k+1]}] + 1;
                else
                    hit[{i,arr[i][k]}]=hit[{i,arr[i][k+1]}];
                k--;
            }}
        for(ll i=0;i<n;i++)
        {
            ll neg=-1 , pos= arr[i].size();
            for(ll j=0;j<arr[i].size();j++)
            {
                if(arr[i][j]<0)neg=j;
                if(arr[i][j]>0)
                {pos=j;break;}
            }
            ll k=pos, l=neg;
            while(k<arr[i].size() && l>=0)
            {
                if(abs(arr[i][l])>arr[i][k])k++;
                else
                {big[i][l]=arr[i][k];l--;}
            }
            k=pos;l=neg;
            while(k<arr[i].size() && l>=0)
            {
                if(abs(arr[i][l])<arr[i][k])
                l--;
                else
                {
                    big[i][k]=arr[i][l];
                    k++;
                }
            }
            
        }
        
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<arr[i].size();j++)
            {
                if(freq[abs(arr[i][j])]>=2)
                {
                    if(arr[i][j]<0)sum+=j;
                    else sum+=(arr[i].size()-j-1);
                }
                else{
                    sum+=hit[{i,big[i][j]}];
                    if(arr[i][j]<0)sum+=x[i];}
            }
        }
        
        for(auto z:freq)
            if(z.second>1)ans++;

        ll res= ans+sum;
        cout<<res<<endl;
}

int32_t main(){
    fastio;

    freopen("input1.txt","r",stdin);
    freopen("output.txt","w", stdout);
    
    int t;cin>>t;while(t--){
        cin>>n;
        map<ll,ll> freq;
        vector<ll> arr[n], big[n];
        for(int i=0;i<n;i++)
        {
            ll m;cin>>m;
            for(int j=0;j<m;j++)
            {
                ll x;
                cin>>x;
                arr[i].push_back(x);
                freq[abs(x)]++;
                big[i].push_back(0);
            }
        }
        solve(arr, big, freq);
    }
}