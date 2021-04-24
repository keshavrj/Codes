#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r)
{
    uniform_int_distribution<int> uid(l, r);
    return uid(rng);
}
  
#define int long long 
#define pb push_back
#define S second
#define F first
#define f(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define precise(x) fixed << setprecision(x) 

const int MOD = 1e9+7;

int mod_pow(int a,int b,int M = MOD)
{
    if(a == 0) return 0;
    b %= (M - 1);  //M must be prime here
    
    int res = 1;
    
    while(b > 0)
    {
        if(b&1) res=(res*a)%M;
        a=(a*a)%M;
        b>>=1;
    }
    
    return res;
}

using u64 = uint64_t;
using u128 = __uint128_t;

u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (u128)result * base % mod;
        base = (u128)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(u64 n) { // returns true if n is prime, else returns false.
    if (n < 2)
        return false;

    int r = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}

void solve()
{
   int n;
    cin >> n;
   
   //first I find the square-root of n, biggest x such that (x*x) <= n
   int l = 1;
   int r = 1e9;
   int res = l;
    
   while(l <= r)
   {
       int mid = (l + r)/2;
       
       if((mid*mid) <= n)
       {
           res = mid;
           l = mid + 1;
       }
       else r = mid - 1;
   }
    
   vector<int> prs; 
    
   //now I have to find a prime in the vicinity of +- 3000
   for(int i=(res - 3100);i<=(res+3100);i++)
   {
       if(i <= 1) continue;
       if(MillerRabin(i)) prs.pb(i);
   }
    
   int rr = prs[0]*prs[1];
    
   for(int i=1;i<prs.size();i++)
   {
       int mn = (prs[i]*prs[i-1]);
       
       if(mn <= n) rr = mn;
   }
    
   cout << rr << '\n'; 
}

signed main()
{
    fast;
    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
    cout <<"Case #" << i <<": ";    
    solve();
    }
}
