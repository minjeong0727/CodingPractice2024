#include <iostream>
using namespace std;


void BBQ(int a, int b){
    int hab = a + b;
    int cha = a - b;
    int gob = a * b;
    int mock = a / b;

    cout << "합:" << hab << endl;
    cout << "차:" << cha << endl;
    cout << "곱:" << gob << endl;
    cout << "몫:" << mock << endl;
}


int main(){
    int a;
    int b;
    cin >> a;
    cin >> b; 
    BBQ(a, b);
    
   return 0; 
}