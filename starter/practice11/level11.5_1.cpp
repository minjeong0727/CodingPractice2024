#include <iostream>
using namespace std;

int main(){

    char arr[7] = {'D','F','G','D','A','Q'};


    char ch1;
    char ch2;

    cin >> ch1;
    cin >> ch2;

    int flag = 0;

    for(int i = 0; i < 7; i++){
        if(ch1 <= arr[i] && arr[i]<= ch2){
            flag = 1;
            break;
        }
    }

    if(flag == 1)cout << "발견!!!";
    if(flag == 0)cout << "미발견!!!";

}