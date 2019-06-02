#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){

    int A,P; cin >> A >> P;

    int mP=A*3;
    P=P+mP;
    cout << int(P/2) << endl;

}