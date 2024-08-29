#include <iostream>
using namespace std;

int main(){
    char map[3][3] = {
        {'A','H','A'},
        {'B','B','B'},
        {'C','F','R'}
    };


    char maxCh = 'A';
    char minCh = 'Z';
    for(int y = 0; y < 3; y++){
        for(int x = 0; x <3; x++){
            if(map[y][x] > maxCh)maxCh = map[y][x];
            if(map[y][x] < minCh)minCh = map[y][x];
        }
    }
    cout << maxCh << endl;
    cout << minCh << endl;
}