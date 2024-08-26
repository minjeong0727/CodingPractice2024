#include <iostream>
using namespace std;

int chicken(){
    int num;
    cin >> num;
    return num + 10;
}
char coke(){
    char ch;
    cin >> ch;
    return ch;
}

void  KFC(){
    int num = chicken();
    char ch = coke();
    cout << num;
    cout << ch;
   
}


int main(){
    KFC();
}
