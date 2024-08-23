#include <iostream>
using namespace std;


int main(){
    //이중for문
    //이중 for문 
    //일중 for문

    // int vect [4][3];

    // for(int i = 0; i< 2; i++){
    //     for(int j = 0; j < 2; j++){
    //         vect[i][j] = 65;
    //     }
    // }


    // for(int i = 2; i < 4; i++ ){
    //     for(int j = 0; j < 3; j++){
    //         vect[i][j] = j++;
    //     }
    // }

    // for(int i = 0; i < 2; i++){
    //     vect[i][2] = 96;
    // }
    


    char map [4][3];
    char t = 'A';
    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 2; x++){
            map[y][x] = t++;
        }

    }

    t = '1';
    for(int y = 2; y <= 3; y++){
        for(int x = 0; x < 3; x++){
            map[y][x] = t++;
        }
    }

    t = 'Y';
    for(int y = 0; y <= 3; y++){
        map[y][2] = t++;
    }
    return 0;
}
