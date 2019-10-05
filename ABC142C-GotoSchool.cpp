#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){

    int n;cin>>n;
    int a[n];

    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    int o[n];
    for(int i=0;i<n;i++){
        o[a[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<o[i]<<" ";
    }
    
}