#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007


int power(int a,  int n) 
{
long long res=1;
 while(n)
 {
     if(n&1)    /// if odd;
     {
         res=((res)%mod*(a%mod))%mod;
         n--;
     }
     a=((a%mod)*(a%mod))%mod;
     n/=2;
 }
return res%mod;
}

int modinverse(int a, int m) 
{   
	int m0 = m;
    int y = 0, x = 1;
    if (m == 1)
        return 0;
    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
}
    if (x < 0)
        x += m0;
 
    return x;

} 
vector<int> solve(int N, vector<long long> A, int Q, vector<long long> Queries)
{
	vector<int> ans;
	long long product=1;
	for(int i=0;i<N;i++)
		product= (product*A[i])%mod;
	for(int i=0;i<Queries.size();i++)
		{
			long long x= Queries[i];
			long long px= power(x,N);
			long long in= modinverse(px,1000000007)%mod;
			int res= (product*in)%mod;
			ans.push_back(res);
		}
		return ans;
}



int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt","r", stdin);
    freopen("output.txt","w", stdout);
   #endif
vector<long long> a(2), q(2);
vector<int> res;
a[0]=6,a[1]=12;
q[0]=2,q[1]=3;
res= solve(2,a,2,q);
for(auto x: res)
cout<<x<<" ";


}