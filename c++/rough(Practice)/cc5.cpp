#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);

    int T;
    cin>>T;
    while(T--){
    int K;
    cin>>K;
    vector<vector<char> > chess(8,vector<char> (8,'.'));
    chess[0][0]='O';
    if(K>8 && (K%8)!=0)
    {

        int j=ceil((double)K/8);
        for(int i=chess.size()-1;i>=K%8;--i)
        chess[i][j-1]='X';
    for(int i=0;i<=K%8;i++)
    {
        chess[i][j]='X';
    }
    }

   else if(K<8)
    {
        chess[K][0]='X';
        for(int i=0;i<=K;i++)
            chess[i][1]='X';
    }
    else //if(K%8==0)
    for(int i=0;i<8;i++)
        chess[i][K/8]='X';

    for(int i=0;i<chess.size();i++)
    {
        for(int j=0;j<chess.size();j++)
           cout<< chess[i][j];
     cout<<"\n";
    }
    }
    return 0;
}
