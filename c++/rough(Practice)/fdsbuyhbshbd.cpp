#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--){
	    int n;
	    cin>>n;
	    vector<int> strip(n+1);
	    bool allones = false;
	    for(int i = 1; i <= n; i++){
	        cin>>strip[i];
	        if(i > 1 && i < n){
	            allones = allones || strip[i];
	        }
	    }
	    if(!allones)
        {
	        if((n-2) % 2 ){
	            cout<<"Yes"<<endl;
	        }else{
	            cout<<"No"<<endl;
	        }
	        continue;
	    }





	    int first_largest = 0;
	    int second_largest = 0;
	    int count = 0;

	    for(int i = 1; i <= n; i++){
	        if(strip[i] == 0){
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
	return 0;
}
