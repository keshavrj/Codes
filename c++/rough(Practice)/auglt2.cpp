#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define tc long t;cin>>t;while(t--)
#define pb push_back
#define For(a,n,xx) for(long xx=a;xx<n;xx++)
#define vi vector<int>
#define vc vector<char>
#define vll vector<ll>
#define vvi vector<vi>
#define vvc vector<vc>
#define umap unordered_map
using namespace std;

int main()
{
    fastio;
tc{
int n;cin>>n;
bool arr[n];
bool flg=1;
int zeroes=0;
//arr[0]=arr[n-1]=1;
for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)zeroes++;
        if(i==0 || i==(n-1));
           else if(arr[i]==1)
                flg=0;
    }

if(flg && !(n&1))cout<<"No"<<endl;
else if(flg && (n&1))cout<<"Yes"<<endl;
else{


	    int first_largest = 0;
	    int second_largest = 0;
	    int count = 0;

	    for(int i =0; i <n; i++){
	        if(arr[i] == 0){
	            count++;
	        }else{

	            if(count >= first_largest){
	                second_largest = first_largest;
	                first_largest = count;
	            }
	            if(count > second_largest && count < first_largest){
	                second_largest = count;
	            }
	            count = 0;
	        }
	    }
	    if(first_largest == 0){
	        cout<<"No"<<endl;

	    }else if(second_largest == 0){
	        if(first_largest % 2) cout<<"Yes"<<endl;
	        else cout<<"No"<<endl;
	    }




else{
        if(first_largest % 2 == 0){
	            cout<<"No"<<endl;
	        }else{
	            if((first_largest + 1)/2 > second_largest)
	                cout<<"Yes"<<endl;
	            else{
	                cout<<"No"<<endl;
	            }
	        }
	    }




}
}
return 0;
}

