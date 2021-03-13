#include<bits/stdc++.h>
using namespace std;

int main()
{
    int comp = memcmp("GEEKSForgeeks", "geeksf", 13);
    if (comp == 0) {
        std::cout << "both are equal";
    }
    if (comp < 0) {
        std::cout << "String 1  is less than String 2";
    } else {
        std::cout << "String 1 is  greater than String 2";
    }




    /*set<int> s1;
    s1.insert(40);
    s1.insert(50);
    s1.insert(44);
    s1.insert(46);
    s1.insert(60);
    for(auto &x:s1)
        cout<<x<<" ";*/

    return 0;
}
