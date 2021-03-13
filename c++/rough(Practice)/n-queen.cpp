#include<bits/stdc++.h>
using namespace std;
int grid[10][10];
void print(int n) {
    for (int i = 0;i <= n-1; i++) {
        for (int j = 0;j <= n-1; j++)
                cout <<grid[i][j]<< " ";
        cout<<endl;}
    cout<<endl<<endl;
}
bool isSafe(int col, int row, int n) {
    for (int i = 0; i < row; i++)
        if (grid[i][col])return false;

    //check for upper left diagonal
    for (int i = row,j = col;i >= 0 && j >= 0; i--,j--) {
        if (grid[i][j]) {
            return false;
        }
    }
    //check for upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; j++, i--) {
        if (grid[i][j]) {
            return false;
        }
    }
    return true;
}

bool solve (int n, int row)
{
    if (n == row){
        print(n);
        return 1;
    }
    bool res = false;//flag=0;
    for (int i = 0;i <n;i++) {
        if (isSafe(i, row, n)){
       //         flag=1;
            grid[row][i] = 1;
            res = solve(n, row+1) || res;
            grid[row][i] = 0;
        }
    }
    //if(flag) res=1;
    return res;
}

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
        int n;cout<<"Enter the number of queen"<<endl;cin >> n;cout<<endl;
        grid[10][10]={0};
        bool res = solve(n, 0);
        if(!res)cout << -1 << endl;
        else  cout << endl;
  return 0;
}
