#include <iostream>
using namespace std;

int main(){
    char vect[5];

    cin >> vect;

    for(int i = 0; i < 5; i++){
        if(vect[i]=='\0'){
            cout << i;
            break;
        }
    }
    return 0;
}