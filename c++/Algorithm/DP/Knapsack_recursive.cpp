#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int knapsack(int wt[], int val[], int w, int n)
{
	//base condition(smallest possible case):
	if(n==0 || w==0)
		return 0;
	// choice:

	if(wt[n-1]<=w)
		return max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
	// else
	return knapsack(wt,val,w,n-1);	
}


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack( wt, val, W, n);
    return 0;


}