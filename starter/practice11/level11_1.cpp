#include <iostream>
using namespace std;

int input(){
    int num;
    cin >> num;
    return num;
}

void calc(int a, int b, int c){
    int sum = a + b + c;
    cout << sum;
}
int main(){
    int a = input();
    int b = input();
    int c = input();

    calc(a, b, c);
    return 0;
}