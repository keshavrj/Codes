#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define tc long t;cin>>t;while(t--)
using namespace std;
int arr[100005], sqarr[1001], blk, n;

void solve(int l , int r)
{

    int ans= INT_MAX;
    int a= l/blk;
    int b= (blk*(a+1));
    int c= r/blk;
    for(int i= l ; i< b && i<n && i<r; i++)
        ans= min(arr[i], ans);

    for(int i=a+1 ; i<c ; i++ )
        ans= min(ans, sqarr[i]);
    
    for(int i = max(l, blk*c) ;i<=r;i++)
        ans= min(ans, arr[i]);
    

    cout<<ans<<endl;
}   


int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input1.txt","r",stdin);freopen("output.txt","w",stdout);
    // #endif
    fastio;

    cin>>n;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    blk= (int)(sqrtl(n));
    
    int len = ceil((double)n/blk);
    
    for(int i=0;i<len;i++)
    {
        int x= INT_MAX;

        for(int j=i*blk ; j< blk*(i+1) && j<n;j++)
            x= min(x, arr[j]);
        
        sqarr[i]= x;

    }
    
    tc{
        int l , r;cin>>l>>r;
        solve(l,r);
    }

}

