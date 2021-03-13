#include<bits/stdc++.h>
#include <string>
using namespace std;
int findMinRec(int arr[], int i, int sumCalculated, int sumTotal)
{
	if (i==0)
		return max((sumTotal-sumCalculated),sumCalculated);
        return min(findMinRec(arr, i-1, sumCalculated+arr[i-1], sumTotal), findMinRec(arr, i-1, sumCalculated, sumTotal));
}

int main()
{
    string S, T;
    vector<string> vect;
    getline(cin, S);
    stringstream X(S);
    while (getline(X, T, ' '))
    {
        vect.push_back(T);
    }
    vector<int> arrd;
    for(auto &x:vect)
       {
           int p=0;
           stringstream g(x);
           g>>p;
           arrd.push_back(p);
       }

    for(auto &x:arrd)
        cout<<x<<" ";
	int arr[arrd.size()];
	for(int i=0;i<arrd.size();i++)
        arr[i]=arrd[i];
	int n = arrd.size();
	cout << "The minimum time will be: "<<findMinRec(arr, n, 0, accumulate(arr,arr+n,0));
	return 0;
}
