#include <iostream>
using namespace std;


 char map[3][3] = {
        {'A','H','A'},
        {'B','B','B'},
        {'C','F','R'}
    };




char getMaxCh(){
    char max = 'A';
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(map[y][x] > max)max = map[y][x];

        }
    }

    return max;
}


char getMinCh(){
    char min = 'Z';
    for(int y = 0; y < 3; y ++){
        for (int x = 0; x < 3; x++){
            if(map[y][x] < min)min = map[y][x];
        }
    }
    return min;
}

int main(){
    cout << getMaxCh() << endl;
    cout << getMinCh() << endl;
}