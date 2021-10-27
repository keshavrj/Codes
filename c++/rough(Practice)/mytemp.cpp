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
/*
implementation: 
oset<int> s;
cout<<*s.find_by_order(1)<<endl; // kth element 
cout<<s.order_of_key(4);
*/
void take_inp(vector<int> &arr){
    string line;
    int  value,cnt=0;    
    do{if (!getline(cin, line) || line.empty())break;
       istringstream iss(line);
       while (iss >> value){arr.push_back(value);cnt++;}}while (true);
}
void solve()
{




}


int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio;

    int T = 1;cin >> T;
    for (int t = 1; t <= T; t++){
        cout << "Case #" << t << ": ";
        solve();
    }

    // tc
    // solve();
}
