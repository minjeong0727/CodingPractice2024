#include <iostream>
using namespace std;

struct BBQ{
    int x;
    int data[3];
};

int main(){
    BBQ g;
    cin >> g.x;
    for(int x = 0; x < 3; x++){
        cin >> g.data[x];
    }

    int sum = 0;
    for(int x = 0; x < 3; x++){
        sum += g.data[x];

    }

    cout << sum << " " << g.x;
}