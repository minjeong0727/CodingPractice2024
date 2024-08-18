#include <iostream>
using namespace std;

int main(){

    int arrA[5] = {2, 1, 2, 4, 5};

    int arrB[3][3] = {
        {2, 5, 3},
        {4, 5, 7},
        {8, 7, 2}
    };


    int input;
    cin >> input;

    int cnt = 0;

    for(int x : arrA){
        if(x==input){
            cnt++;
        }
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arrB[i][j] == input)cnt++;
        }
    }

    cout << cnt;
    return 0;
}