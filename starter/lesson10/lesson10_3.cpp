#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int t = 150;

    for(int i = 0;  i<5; i++){
        arr[i] = t;
        t-=15;
    }

    // int x = 0;
    // for(int i = 170; i >=110; i-= 15){
    //     arr[x] = i;
    //     x++;
    // }
    return 0;



}