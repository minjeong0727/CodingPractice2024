#include <iostream>
using namespace std;

int function1(int input){
    cout << input;
}
char function2(char input){
    cout << input;
}

int main(){
    int input1;
    char input2;

    cin >> input1;
    cin >> input2;

    function1(input1);
    function2(input2);
}