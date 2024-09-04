#include <iostream>
using namespace std;

int main(){
    int map[3][3] = { 0 };

    int t = 1;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x <= y; x++){
            map[y][x] = t++;
        }
    }



    for(int y = 2; y >= 0; y--){
        for(int x = y; x <= 2; x++){ //방향이 고정되어 있음
            map[y][x] = t++;
        }
    }


    for(int x = 2; x >= 0; x--){
        for(int y = 2; y >= x; y--){ //감소하는 방향
            map[y][x] = t++
        }
    }



    return 0;
}