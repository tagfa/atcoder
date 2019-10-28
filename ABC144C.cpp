#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <math.h>
using namespace std;

bool IsPrime(long long int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main(){
    cin.tie(0);
   	ios::sync_with_stdio(false);

    long long int N;
    cin>>N;

    long long int c=INFINITY;

    if(IsPrime(N)==true){
        cout<<N-1<<"\n";
        return 0;
    }else{
        for(long long int i=2;i<=sqrt(N);i++){
           if(N%i==0){
               if((i-1)+((N/i)-1)<c){
                   c=(i-1)+((N/i)-1);
                   
               }
            }
        }
        cout<<c<<"\n";
        return 0;
    }
    

}