#include <iostream>
using namespace std;

int main(){
    int arr[4] = {4, 2, 5, 9};

    int input;
    cin >>input;
    int flag = 0;
    for(int i = 0; i < 4; i++){
        if(arr[i]==input){
            flag +=1;
            break;
        }
    }


    if(flag == 1)cout << "O";
    else cout << "X";
}