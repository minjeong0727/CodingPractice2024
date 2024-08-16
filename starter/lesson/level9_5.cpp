#include <iostream>
using namespace std;

int main(){
    int arr[4][3] ={{4,2,5},{1,1,1},{9,9,9},{4,2,7}};

    int temp;
    temp = arr[0][1];
    arr[0][1] = arr[2][2];
    arr[2][2] = temp;

    temp = arr[3][0];
    arr[3][0] = arr[3][2];
    arr[3][2] = temp;

    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 3; x++){
            cout << arr[y][x];
        }cout << "\n";
    }
    return 0;
}