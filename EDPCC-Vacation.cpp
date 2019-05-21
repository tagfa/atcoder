#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int N; cin >> N;
    int a[N][3];
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }

    long long dp[N+1][3]={};
    int acty=10;
    int actt=0;
    int tmp=0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j==k) continue;
                tmp=dp[i][j]+a[i][k];
                if(dp[i+1][k]<tmp){
                    dp[i+1][k]=tmp;
                }    
            }
            
        }
        acty=actt;
    }

    long long res;
    
    cout << std::max({dp[N][0], dp[N][1], dp[N][2]}) << endl;

}