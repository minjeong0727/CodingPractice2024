#include <iostream>
using namespace std;

int main(){

    char vect[10];

    cin >> vect;

    int len;

    for(int i = 0; i < 10; i++){
        if(vect[i]=='\0'){
            len = i;
            break;
        }
    }

    for(int i = len-1; i >= 0; i--){
        cout << vect[i];
    }
    
return 0;
}