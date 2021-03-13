#include<bits/stdc++.h>
#define endl "\n"
#define For(a,n,xx) for(int xx=a;xx<n;xx++)
#define ll long long int
#define intvec vector<int>
#define umap unordered_map
using namespace std;
int uglynumber(int n)
{
int arr[n],next=1,i2=0,i3=0,i5=0;
arr[0]=1;
int nm2=2,nm3=3,nm5=5;

For(1,n,i)
{
    next=min(nm2,min(nm3,nm5));
    arr[i]=next;
    if(next==nm2)
    {i2++;
        nm2=arr[i2]*2;
    }


    if(next==nm3)
    {i3++;
        nm3=arr[i3]*3;
    }

    if(next==nm5)
    {i5++;
        nm5=arr[i5]*5;
    }
}
return next;}


int main()
{
    ios_base :: sync_with_stdio(false);
    int T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<uglynumber(N)<<endl;

    }





    return 0;
}
