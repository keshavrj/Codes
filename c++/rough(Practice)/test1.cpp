#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)


// Driver program to test above Macros
int main()
{
    int i;
    int array[] = {4, 5, 6, 9, 22, 11};
    int size= sizeof(array)/sizeof(array[0]);

    // Default 0 index based loop
    rep(i, size)
        cout << array[i] << " ";
    cout<<"\n";

    // Starting index based loop
    REP(i, 1, size-1)
        cout << array[i] << " ";
    cout<<"\n";

    // Reverse for loop
    REPR(i, size-1,0)
        cout << array[i] << " ";
    return 0;
}
