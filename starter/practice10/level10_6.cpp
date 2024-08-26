#include <iostream>
using namespace std;

void printData(int value){
    cout << value<< endl;
}


int even(int num){
    int total = num*2;
    printData(total);
}

int odd(int num){
    int total =num-10;
    printData(total);
}

int main(){
    int a, b;
    cin >> a >> b;
    if((a/b)%2 == 0){
        even(a/b);
    }else odd(a/b);


    cout << a + b << endl;
}