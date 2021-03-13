 #include <bits/stdc++.h>
  #include<algorithm>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
sort(arr.begin(),arr.end());
int mint=INT_MAX;

//while(i<arr.size()-k)
for(int i=0;i<arr.size()-k;i++)
{
    int j=i+k-1;
    if((arr[j]-arr[i])<mint)
    {
        mint = arr[j]-arr[i];
    }
}

return mint;
}

int main()
{
    int k;
    cin>>k;
    vector<int> arr={1,4,7,2,12,13};
    cout<<maxMin(k,arr)<<endl;
return 0;
}
