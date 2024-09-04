#include <iostream>
using namespace std;

int main(){
    char word[11];
    cin >> word;
    int len = 0;
    for(int i = 0; i < 10; i++){
        if(vect[i]=='\0'){
            len = i;
            break;
        }
    }

    cout << len;
    return 0;
}