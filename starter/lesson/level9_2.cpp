#include <iostream>
using namespace std;
// void abc(int num1, int num2){
//     if(num1 > num2){
//         cout << num1;
//     }else{
//         cout << num2;
//     }
// }

// int main(){
//     int num1;
//     int num2;
//     cin >> num1;
//     cin >> num2;

//     abc(num1, num2);

// }

void abc(){
    int a, b;
    cin >> a >> b;

    if(a > b){
        cout << a ;
    }else{
        cout << b << "\n";
    }
}

int main(){
    abc();
    abc();
    return 0;
}