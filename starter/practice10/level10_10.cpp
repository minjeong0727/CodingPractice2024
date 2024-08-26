#include <iostream>
using namespace std;

int main(){

    int input;
    cin >> input;

    int map[3][4] = {
        {12, 11, 10, 9},   // 첫 번째 행
        {8, 7, 6, 5},      // 두 번째 행
        {4, 3, 2, 1}       // 세 번째 행
    };


    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 4; x++){
            if(x==input){
                map[y][x] = 0;
            }
            cout << map[y][x] <<" ";
        }
        cout << endl;
    }



    return 0;
}