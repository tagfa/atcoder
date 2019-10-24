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

    
    for(int i=0;i<s.length();i=i+2){
        if(s[i]=='L'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    for(int i=1;i<s.length();i=i+2){
        if(s[i]=='R'){
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;

    return 0;

}