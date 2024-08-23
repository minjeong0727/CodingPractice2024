#include <iostream>
using namespace std;

int main(){

    int map[3][3];
    int t = 1;

    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            map[y][x] = t++;
        }
    }

    for(int x = 2; x >= 0; x--){
        for(int y = 2; y >= 0; y--){
            map[y][x] = t;
            t++;
        }
    }


    for(int y = 0; y < 3; y ++){
        for(int x = 2; x >= 0; x--){
            map[y][x] = t;
            t++;
        }
    }

    //////////////////////////////////

    int map [4][5] = { 0 };

    int t = 1;
    for(int x = 4; x >= 0; x--){
        for(int y = 1; y >= 0; y--){
            map[y][x] = t++;
         }
    }
    t = 1;
    for( int y = 2; y <= 3; y++){
        for(int x = 4; x >= 0; x--){
            map[y][x] = t++;

        }
    }


    return 0;
}

