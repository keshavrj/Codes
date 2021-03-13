#include<bits/stdc++.h>
using namespace std;

void multiply(long long int f[3][3],long long int m[3][3],long long int mod){
    long long int n[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            n[i][j]=0;
            for(int k=0;k<3;k++){
                n[i][j]=((n[i][j]%mod)+((f[i][k]%mod)*(m[k][j]%mod))%mod)%mod;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            f[i][j]=n[i][j];
        }
    }
    return ;
}
void power(long long int f[3][3],long long int m[3][3]
,long long int n,long long int mod){
    if(n==1 || n==0){
        return ;
    }
    power(f,m,n/2,mod);
    multiply(f,f,mod);
    if(n%2==0){
        return;
    }
    else{
        multiply(f,m,mod);
        return;
    }
}
int main(){
    int tc=0;
    cin>>tc;
    while(tc--){
        long long int a,b,c,n,mod;
        cin>>a>>b>>c>>n>>mod;
        long long int f[3][3],m[3][3];
        f[0][0]=a;
        f[0][1]=b;
        f[0][2]=c;
        f[1][0]=1;
        f[1][1]=0;
        f[1][2]=0;
        f[2][0]=0;
        f[2][1]=0;
        f[2][2]=1;
        m[0][0]=a;
        m[0][1]=b;
        m[0][2]=c;
        m[1][0]=1;
        m[1][1]=0;
        m[1][2]=0;
        m[2][0]=0;
        m[2][1]=0;
        m[2][2]=1;
        if(n==1 || n==2){
            return 1;
        }
        power(f,m,n-2,mod);
        long long int ans=0;
        for(int j=0;j<3;j++){
            ans=((ans%mod)+(f[0][j]%mod))%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
