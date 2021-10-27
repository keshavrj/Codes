#include<bits/stdc++.h>
#define ll long long int
using namespace std;  
// void solve()
// {
//     int n;cin>>n;
//     int arr[n+1][n+1];
//     bool flag=1;
//     int k=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1 ; j<=n ; j++, k++)
//         {
//             if(flag)
//             {
//              arr[i/2 +1][j]=k;
//             }
//             else
//             {
//                 arr[n+1-i/2][j] = k;
//             }
//         }
//             flag^=1;
//     }
//     for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=n;j++)
//                 {cout<<arr[i][j];
//             if(j!=n)
//                 cout<<"\t*\t";}
//             cout<<endl;
//         }

// }


void solve()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i+=2)
    {
        for(int j=1;j<=n;j++)
        {

            cout<<((n*i+j));
            if(j!=n)
                cout<<"*";
        }
        cout<<endl;
    }
     if(n%2)
            i-=2;
     for(i--;i>0;i-=2)
     {
         for(int j=1;j<=n;j++){
        cout<<((n*i+j));
        if(j!=n)
                cout<<"*";
     }
        cout<<endl;
    }
}


int main() {   
    freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    solve();

}