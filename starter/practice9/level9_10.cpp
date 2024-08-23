#include <iostream>
using namespace std;


void checkChar(char x){
    if(x >= 65  && x<=90){
        cout << "대";
    }else if(x >= 97 && x <= 122){
        cout <<"소";
    }
    
}


int main(){
    char arr[5];
    for(int i = 0; i  < 5; i++){
        cin >> arr[i];
        checkChar(arr[i]);
    }
    

    return 0;
}
