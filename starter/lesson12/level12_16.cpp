#include <iostream>
using namespace std;

int main(){
    char v[5] = "ABCQ";
    for(int y = 0; y < 4; y++){
        for(int x = 3-y; x >= 0; x--){
            cout <<v[x];
        }
        cout << endl;
    }
    return 0; 
}