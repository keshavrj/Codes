#include<bits/stdc++.h>
#include<chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
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
int arr[N];
pair<int,int> tr[4*N];
void build(int node, int st, int en)
{
    if(st==en)//leaf node
    {
        tr[node]= {arr[st],1};
        return;
    }
    int mid= (st+en)/2;
    build(2*node, st,mid); //left child
    build(2*node+1, mid+1, en); //right child

    // tr[node]= tr[2*node] + tr[2*node+1]; // changable logic
    if(tr[2*node].ff < tr[2*node+1].ff)
        tr[node]= tr[2*node];
    else if(tr[2*node+1].ff < tr[2*node].ff)
        tr[node]= tr[2*node+1];
    else {
        tr[node].ff= tr[2*node].ff;
        tr[node].ss= tr[2*node].ss+ tr[2*node+1].ss;
    }

}

pair<int,int> query(int node, int st, int en, int l, int r)
{
    if(st>r || en<l)
        return {INT_MAX,0}; 
    if(st>=l && en<=r)
        return tr[node];
    int mid= (st+en)/2;
    pair<int,int> q1= query(2*node,st,mid,l,r);
    pair<int,int> q2= query(2*node+1,mid+1,en,l,r);
    pair<int,int> ans;
    // return min(q1,q2);
    if(q1.ff<q2.ff)
        ans= q1; 
    else if(q1.ff>q2.ff)
        ans= q2;
    else {
        ans.ff= q1.first;
        ans.ss= q1.ss + q2.ss;
    }
    return ans;
}

void update(int node, int st,int en, int idx, int val)
{
    if(st==en) // leaf node idx;
    {
        arr[st]=val;
        tr[node]= {val,1};
        return;
    }
    int mid = (st+en)/2;
    if(idx<=mid)
        update(2*node,st,mid,idx,val);
    else update(2*node+1,mid+1,en, idx, val);
    // tr[node]= min(tr[2*node], tr[2*node+1]);

    if(tr[2*node].ff< tr[2*node+1].ff)
        tr[node]= tr[2*node];
    else if(tr[2*node+1].ff<tr[2*node].ff)
        tr[node]= tr[2*node+1];
    else
        tr[node]= {tr[2*node].ff, tr[2*node].ss+ tr[2*node+1].ss};
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
            pair<int,int> ans= query(1,0,n-1, l,r-1);
            cout<<ans.ff<<" "<<ans.ss<<endl;
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
