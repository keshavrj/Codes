#include<iostream>
#include <iomanip>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
double knapsack(double n, vector<double> weight, vector<double> profit, double capacity)
{
double tp=0.0;
double a,u=capacity;
for(int i=0;i<n;i++)
{

if(u==0)
    return tp;
else
{
            a = min(weight[i],u);
            tp+=(a*profit[i]/weight[i]);
            u-=a;
}
}
return tp;
}
int main()
{
double n,i,j;
double capacity,temp;
cin>>n>>capacity;
vector<double> weight(n);
vector<double> profit(n);
vector<double> ratiovec(n);
for(i=0;i<n;i++)
{
    cin>>profit[i]>>weight[i];
}
for(i=0;i<n;i++)
{
ratiovec[i]=profit[i]/weight[i];
}

//swaping process
   for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++)
      {
         if (ratiovec[i] < ratiovec[j])
            {
            temp = ratiovec[j];
            ratiovec[j] = ratiovec[i];
            ratiovec[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
}
cout<<setprecision(10)<<knapsack(n, weight, profit, capacity);
return 0;
}
