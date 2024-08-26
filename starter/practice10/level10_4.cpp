#include <iostream>
using namespace std;

char getChar(char input1, char input2){
    if(input1 < input2){
        return input2;
    }else return input1;
    
}

int main(){
    char input1;
    char input2;
    cin >> input1 >> input2;
    cout << getChar(input1,input2);

}
