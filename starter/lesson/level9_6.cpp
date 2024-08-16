#include <iostream>
using namespace std;

int main(){

    char arr[4] = {'A','B','C','D'};

    char ch = 'T';

    char temp;

    for(int i = 0; i < 4; i++){
        temp = arr[i];
        arr[i] = ch;
        ch = temp;

        
    }
    return 0;
}
