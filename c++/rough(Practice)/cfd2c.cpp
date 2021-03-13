#include<bits/stdc++.h>
#define ll long long
const ll mod=1e9+7;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n,q1=1,q2=1;
	cin>>n;
	for(ll i=2;i<=n;i++) q1=(q1*i)%mod,q2=(q2*2)%mod;
	cout<<(q1+mod-q2)%mod;
}

