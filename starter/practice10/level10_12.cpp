#include <iostream>
using namespace std;

void CountDown(int input){
    for(int i = input; i >0; i--){
        cout << i << " ";
    }
}
int main(){
    int input;
    cin >> input;

    CountDown(input);


    return 0; 
}