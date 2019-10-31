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

    int a,b;
    cin>>a>>b;

    if((b*2)-a>=0){
        cout<<0<<endl;
    }else{
        cout<<a-(b*2)<<endl;
    }


    return 0;

}
