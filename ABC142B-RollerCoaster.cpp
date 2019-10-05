#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){

    int n,k;cin>>n>>k;
    int h[n];
    int cnt=0;

    for(int i=0;i<n;++i){
        cin>>h[i];
    }

    for(int i=0;i<n;++i){
        if(h[i]>=k){
            cnt++;
        }
    }

    cout<<cnt<<endl;


}
