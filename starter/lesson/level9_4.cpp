#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4,2,5,9,7};

    int temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;


    temp = arr[2];
    arr[2] = arr[3];
    arr[3] = temp;

    for(int i = 0; i < 5; i++){
        cout << arr[i];
    } 
    return 0;
}

