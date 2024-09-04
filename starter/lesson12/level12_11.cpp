#include <iostream>
using namespace std;

int main(){


    char vect[20] = "3ABDqweEfq";
    char big[20] = { 0 };



    int len = 0;
    for(int i = 0; i < 20; i++){
        if(vect[i]== '\0'){
            len = i;
            break;
        }
    }

    int t = 0;
    for(int i = 0;i < len; i++){
        if(vect[i] >= 'A' && < vect[i] <= 'Z'){
            big[t] = vect[i];
            t++;
        }
    }

    big[t] = '\0';
    cout << big;
    
    return 0;
}