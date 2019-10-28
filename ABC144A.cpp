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

    int A,B;
    cin>>A>>B;

    if(A>=10 || B>=10){
        cout<<-1<<"\n";
    }else{
        cout<<A*B<<"\n";
    }






    return 0;

}