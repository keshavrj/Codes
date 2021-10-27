#include<bits/stdc++.h>
#include<chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long int
#define ull unsigned long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define umap unordered_map
using namespace std;
template<class T> using oset = tree<T, null_type, less<T>, 
rb_tree_tag, tree_order_statistics_node_update> ; 
/*declaration and use :
oset<int> s;
cout<<*s.find_by_order(1)<<endl; // kth element 
cout<<s.order_of_key(4);
*/

const int N=1e5+4;
int arr[N], tr[4*N];
void build(int node, int st, int en)
{
    if(st==en)//leaf node
    {
        tr[node]= arr[st];
        return;
    }
    int mid= (st+en)/2;
    build(2*node, st,mid); //left child
    build(2*node+1, mid+1, en); //right child

    // tr[node]= tr[2*node] + tr[2*node+1]; // changable logic
    tr[node]= min(tr[2*node], tr[2*node+1]);
}

int query(int node, int st, int en, int l, int r)
{
    if(st>r || en<l)
        return INT_MAX;
    if(st>=l && en<=r)
        return tr[node];
    int mid= (st+en)/2;
    int q1= query(2*node,st,mid,l,r);
    int q2= query(2*node+1,mid+1,en,l,r);
    return min(q1,q2); 

}

void update(int node, int st,int en, int idx, int val)
{
    if(st==en) // leaf node idx;
    {
        arr[st]=val;
        tr[node]= val;
        return;
    }
    int mid = (st+en)/2;
    if(idx<=mid)
        update(2*node,st,mid,idx,val);
    else update(2*node+1,mid+1,en, idx, val);
    tr[node]= min(tr[2*node], tr[2*node+1]);

}

void solve()
{
    int n,q;cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    build(1,0,n-1);
    // while(true)
    while(q--){

        int type;cin>>type;
        // if(type==-1)break;
        if(type==2){
            int l,r;cin>>l>>r;
            cout<<query(1,0,n-1, l,r-1)<<endl;
        }
        else{
            int idx,val;cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }
    // }
}
}


int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;
    
    // tc
    solve();
}
