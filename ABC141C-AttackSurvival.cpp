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

    int N,Q;
    int K;
    cin>>N>>K>>Q;

    int a;
    int c[N]={0};

    for(int i=0;i<Q;i++){
        cin>>a;
        c[a-1]++;
    }


    for(int i=0;i<N;i++){

        if(K-(Q-c[i])<=0){
            cout<<"No"<<"\n";

        }else{
            cout<<"Yes"<<"\n";
        }

    }
 
    

}