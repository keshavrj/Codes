#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char bin[n],gin[n];
    for(auto &x:bin)
        cin>>x;
    for(auto &x:gin)
        cin>>x;
    vector<char> bride,groom;
    for(auto &x : bin)
        bride.push_back(x);
    for(auto &x : gin)
        groom.push_back(x);
int i=0,j=0,k=0;
        while(!bride.empty()  &&  k<n)
        {
            if(bride[i]==groom[j])
            {
                bride.erase(bride.begin());groom.erase(groom.begin());k=0;
            }
            else
            {
                groom.push_back(groom[j]);groom.erase(groom.begin());k++;
            }
        }
        cout<<(int)bride.size();
    return 0;
}
