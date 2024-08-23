#include <iostream>
using namespace std;

void BBQ(int input){
    for(int i = 1; i<=input; i++){
        cout << i;
    }
}
void KFC(char input){
    for (int i = 0; i < 7; i++)
    {
        cout << input;
    }
    
}
int main(){
    int input;
    cin >> input;




    if(input%2 == 1){
        int  methodInput;
        cin >> methodInput;
        BBQ(methodInput);
    }else if(input%2 == 0){
        char methodInput;
        cin >> methodInput;
        KFC(methodInput);
    }

    return 0; 
}