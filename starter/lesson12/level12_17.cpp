#include <iostream>
using namespace std;
int main(){
    char v[5] = "ABCQ";

    for(int y = 0; y < 5; y++){
        for(int x = y; x < 4; x++){
            cout << v[x];
        }
        cout <<"\n";
    }
    return 0;
}