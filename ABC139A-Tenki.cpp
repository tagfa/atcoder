#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){

    cin.tie(0);
   	ios::sync_with_stdio(false);

    string s,t;
    cin>>s>>t;
    int cnt=0;

    rep(i,3){
        if(s[i]==t[i]){
            cnt++;
        }
    
    }
    cout<<cnt<<endl;
    return 0;

}
