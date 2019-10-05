#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
	int N,X;
	cin >> N >> X;
	int now = 0;
	int count = 1;
	for (int i = 0; i < N; ++i) {
		int L;
		cin >> L;
		now += L;
		if (now <= X) {
			++count;
		}
	}    cout<<count<<endl;
    return 0;
}