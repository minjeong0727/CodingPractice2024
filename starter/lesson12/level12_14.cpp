#include <iostream>
using namespace std;

int main(){
    char v[5] = "ABBQ";

    for(int y = 0; y < 4; y++){
        for(int x = 0; x <= y; x++){
            cout << v[x];
        }
        cout << "\n";
    }
    return 0;
}