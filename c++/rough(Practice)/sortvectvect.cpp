#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
 vector< vector<int> > vect{{3, 5, 1},
                               {4, 8, 6},
                               {7, 2, 9}};
                               int n=vect.size();
    // Entering values in vector
    // Printing the original vector(before sort())



    cout << "The vector before applying sort is:\n" ;
    for (int i=0; i<vect.size(); i++)
    {
        //loop till the size of particular
        //row
        for (int j=0; j<vect[i].size() ;j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }



        sort(vect.begin(),vect.end());
        cout<<endl<<endl;
        for (int i=0; i<vect.size(); i++)
    {
        //loop till the size of particular
        //row
        for (int j=0; j<vect[i].size() ;j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }



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
    vector<int> vect2{5,9,11,5,3,49,64,0};
    sort(vect2.rbegin(),vect2.rend());
    for(auto &x:vect2)
    cout<<endl<<x<<endl;
    return 0;
}
