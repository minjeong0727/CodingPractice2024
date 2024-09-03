#include <iostream>
using namespace std;

int main(){

//대문자 -> 소문자

//소문자 -> 대문자

//숫자 -> +5

char map[3][3] = {
    {'a', 'b','E'},
    {'E', '2', 'W'},
    {'3', '2', '4'}
};

// for(int y = 0; y < 3; y++){
//     for(int x = 0; x < 3; x++){
//         if( 65< map[y][x] &&  map[y][x] < 92){
//             map[y][x] + 27;
//         }else if(92 < map[y][x] && map[y][x] < 112){
//             map[y][x] - 27;
//         }else {
//             map[y][x] + 5;
//         }
//     }
// }



for(int y = 0; y < 3; y++){
    for(int x = 0; x < 3; x++){
        if(map[y][x] >= 'A' && map[y][x] <= 'Z'){
            map[y][x] = map[y][x] + ('a'-'A');
        }
        else if(map[y][x] >= 'a' && map[y][x] <= 'z'){
            map[y][x] = map[y][x] - ('a'- 'A');
        }
        else if(map[y][x] >= '0' && map [y][x] <= '9'){
            map[y][x] = map[y][x] + 5;
        }
    }
}


for(int y = 0; y < 3; y++){
    for(int x = 0; x < 3; x++){
        cout << map[y][x] <<" ";
    }
    cout << endl;
}

return 0;

}