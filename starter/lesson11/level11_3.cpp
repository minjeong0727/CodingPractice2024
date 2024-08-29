#include <iostream>
using namespace std;


void mkk(int num){
    retrun num * 2;
}

void bts (int num1, int num2){
    return cout << num1* num2;
}

void abc(int num){
    for(int x = 0; x < num; x++){
        cout << "#";
    }
}

int main(){
    abc(7);
    bts(5,8);
    mkk(3);
    return 0;
}