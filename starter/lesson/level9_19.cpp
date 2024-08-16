#include <iostream>
using namespace std;

void bts(int num){
    int arr[5] = {5,5,1,5,1};
    int cnt = 0;

    for(int i = 0; i < 5; i++){
        if(arr[i] == num){
            cnt++;
        }
    };

    if(cnt > 0) cout << "⭕️";
    else cout << "❌";
}

int main(){
    int input;
    cin >> input;

    bts(input);
}


