#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    if(s.compare("Sunny")==0){
        cout<<"Cloudy"<<endl;
    }else if (s.compare("Cloudy")==0)
    {
        cout<<"Rainy"<<endl;
    }else{
        cout<<"Sunny"<<endl;
    }

    return 0;

}