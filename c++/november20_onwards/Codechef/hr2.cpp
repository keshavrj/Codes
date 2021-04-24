#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1e9+7

int noOfWays(int n, int dp[]){
    if(dp[n]!=-1){
        return (int)(dp[n]%mod);
    }
    else{
        return dp[n] = (noOfWays(n-1, dp)%mod+noOfWays(n-3, dp)%mod)%mod;
        
    }
}

int main(){
    int n; cin>>n;
    ll dp[1000];
    fill_n(dp, 1000, -1);
    
    // spl cases
    dp[0] = 1, dp[1]=1, dp[2]=1;
    
    cout<<noOfWays(n, dp)<<endl;
}