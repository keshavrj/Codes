#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
bool sortsec(const pair<int,int> &a, const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    vector< pair <int,int> > vect;
     // vector< pair <int,int> > vect2;
    // initializing 1st and 2nd element of
    // pairs with array values
    int arr[] = {5, 20, 10, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );

    // Printing the original vector(before sort())



    cout << "The vector before applying sort is:\n" ;
    for (int i=0; i<n; i++)
        cout<<vect[i].first<<"\t"<<vect[i].second<<endl;

        sort(vect.begin(),vect.end(),sortsec);

    cout << "The vector after applying sort is:\n" ;
    for (int i=0; i<n; i++)
        cout<<vect[i].first<<"\t"<<vect[i].second<<endl;
/*pair<int,string> p1;
p1=make_pair(1,"bhaau");


vector<vector <int> > vect{{4},{5,6},{3,7,16}};

vect.assign(6,10);


for(auto i=vect.rbegin();i!=vect.rend();i++)
    cout<<*i<<endl;// since, i is an iterator so it points to address;


    cout<<endl<<vect.capacity();
    vect.shrink_to_fit();
    cout<<endl<<vect.capacity();




for (int i=0; i<vect.size(); i++)
    {
        //loop till the size of particular
        //row
        for (int j=0; j<vect[i].size() ;j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }


    sort(vect.begin(),vect.end());



    for (int i=0; i<vect.size(); i++)
    {
        //loop till the size of particular
        //row
        for (int j=0; j<vect[i].size() ;j++)
            cout << vect[i][j] << " ";
        cout << endl;
    */

    return 0;
}
