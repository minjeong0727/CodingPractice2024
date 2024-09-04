#include <iostream>
using namespace std;

int main(){
    char v[5] = "ABCQ";

    for(int y = 0; y < 4; y++){
        for(int x = 4; x <= (3-y); x++){
            cout << v[x];
        }
        cout << "\n";
    }
    return 0;
}