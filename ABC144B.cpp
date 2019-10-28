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
    for(int i=1;i<10;i++){
        if(N%i==0){
            if(N/i<=9){
                cout<<"Yes"<<"\n";

                return 0;
            }
        }


    }
    cout<<"No"<<"\n";
    return 0;

}