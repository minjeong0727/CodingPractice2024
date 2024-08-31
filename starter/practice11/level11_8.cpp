#include <iostream>
using namespace std;

int main(){
    char vect[13] =  {'S','t','r','u','c','t','P','o','i','n','t','e','r'};

    char input;
    cin >> input;

    int flag = 0;
    for(int i = 0; i < 13; i++){
        if(input == vect[i]){
            flag  = 1;
            break;
        }

    }
    

    if(flag ==0)cout << "미발견";
    if(flag == 1)cout << "발견";
}