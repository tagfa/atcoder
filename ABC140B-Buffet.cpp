#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    cin.tie(0);
   	ios::sync_with_stdio(false);

    int N;
    cin>>N;

    int A[N+2]={0};
    int B[N+2];
    int C[N+1];

    int cnt=0;

    for(int i=1;i<=N;i++){
        cin>>A[i];
    }

    for(int i=1;i<=N;i++){
        cin>>B[i];
    }

    for(int i=1;i<=N;i++){
        cin>>C[i];
    }


    for(int i=1;i<=N;i++){
        cnt=cnt+B[A[i]];

        if(A[i]+1==A[i+1]){
            cnt=cnt+C[A[i]];
        }


    }

    cout<<cnt<<"\n";

    return 0;

}