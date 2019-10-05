#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    char S[10];cin>>S;
    sort(S,S+4);
    if(S[0]==S[1] && S[1]!=S[2] && S[2]==S[3]){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}