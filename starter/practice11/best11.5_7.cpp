#include <iostream>
using namespace std;

char v[3][3] = {
    'a','b','d',
    'e','w','z',
    'q','v','a'
};

int Process(char a){
    char b = a+ 32;
    int x, y, flah = 0;
    for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
            if(v[y][x] == b){
                flag == 1;
                break;
            }

        }
        if(flag==1)break;
    }
    if(flag == 1){
        cout << "존재";
    }else{
        cout << "없음";

    }return 0;
}


int Input(){
    char a;
    cin >> a;
    return a;
}


int main(){
    Process(input());
    return 0;
}