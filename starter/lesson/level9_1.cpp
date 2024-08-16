#include <iostream>
using namespace std;

int main(){
    int vect[4] = {4,7,1, 5};
    for(int i = 0; i < 4; i++){
        cout << vect[i];
    }
    cout <<"\n";

    for(int i = 3; i >= 0; i--){
        cout << vect[i];
    }

}