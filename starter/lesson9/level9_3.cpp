#include<iostream>
using namespace std;

int main (){
    int a = 5;
    int b = 10;
    int  tmp;

    tmp = a;
    a = b;
    b = tmp;
    
    cout << a << b;
    return 0;
}
