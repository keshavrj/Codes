#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"no. daalu: ";
    cin>>n;
    int arr[n][n];
    for(int i=1;i<=n;i++)
    {
            if(i%2==1)
                for(int j=0;j<n;j++)
                    cout<<(i*n)-j<<"\t";

            else
                for(int j=0;j<n;j++)
                    cout<<((i-1)*n)+j+1<<"\t";

            cout<<endl;
    }
    return 0;
}
