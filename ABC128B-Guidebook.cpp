#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct Guidebook
{
    string townname;
    int point;
    int id;

    bool operator<( const Guidebook& right ) const {
        return townname == right.townname ? point > right.point : townname < right.townname;
    }
};

int main(){

    int N; cin >> N;
    vector<Guidebook> g(N);

    for (int i = 0; i < N; i++)
    {
        cin >> g[i].townname >> g[i].point;
        g[i].id=i+1;
    }

    sort(g.begin(),g.end());

    for (int i = 0; i < N; i++)
    {
        printf("%d\n",g[i].id);
    }
    
    return 0;
}