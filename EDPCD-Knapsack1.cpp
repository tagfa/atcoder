#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    long long N,W; cin >> N >> W;
    long long v[N],w[N];
    for(int i=0;i<N;i++){
            cin >> w[i] >> v[i];
    }

    long long dp[N+1][W+1]={};
    long long tmp=0;

    for(int i=0;i<N;i++){
        for(int sum_w=0;sum_w<=W;sum_w++){
            if(sum_w-w[i]>=0){
                tmp=dp[i][sum_w-w[i]]+v[i];
                if(dp[i+1][sum_w]<tmp){
                    dp[i+1][sum_w]=tmp;
                }
            }

            if(dp[i+1][sum_w]<dp[i][sum_w]){
                dp[i+1][sum_w]=dp[i][sum_w];
            }


        }
    }    
    cout << dp[N][W] << endl;
}