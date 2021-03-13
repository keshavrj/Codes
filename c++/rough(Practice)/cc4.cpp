#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sortbysec(const pair<int64_t,int64_t> &a, const pair<int64_t,int64_t> &b)
{
    return (a.second < b.second);
}


int64_t xmisspt(vector<pair<int64_t, int64_t>> vect,int64_t x)
{
    sort(vect.begin(),vect.end());

    for(int64_t i=0;i<x;)
    {
        if(vect[i].first==vect[i+1].first)
            i+=2;
        else
            return vect[i].first;
    }
}
int64_t ymisspt(vector<pair<int64_t, int64_t>> vectt, int64_t x)
{
         sort(vectt.begin(), vectt.end(), sortbysec);
        for(int64_t i=0;i<x;)
        {
        if(vectt[i].second==vectt[i+1].second)
            i+=2;
        else
            return vectt[i].second;
        }
}


int main() {
	// your code goes here
int64_t T;
cin>>T;
while(T--)
{
    int64_t n,a,b;
    cin>>n;
    int64_t x=(4*n-1);
    int64_t arr1[x],arr2[x];


    for (int64_t i=0; i<x; i++)
        cin >>arr1[i]>>arr2[i];


vector< pair <int64_t , int64_t> > vect;
for(int64_t i=0;i<x;i++)
    vect.push_back( make_pair(arr1[i],arr2[i]) );

cout<<xmisspt(vect,x)<<"  "<<ymisspt(vect,x);
}

return 0;
}
