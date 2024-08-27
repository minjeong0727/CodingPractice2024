#include <iostream>
using namespace std;

int main(){
    int map[6][3] = { 0 };
    int i = 10; 

    for(int x = 0; x < 3; x ++){
        for(int y = 0; y < 6; y++){
            map[y][x] = i++;
        }
    }

    int a, b;//행의 시작과 끝이다.
    cin >> a >> b;

    for(int y = 0; y < 6; y++){
        for(int x = 0; x < 3; x++){
            if( (map[y][x] >= map[a][x]) && (map[y][x] <= map[b][x])){
                map[y][x] = 7;
            }
            cout << map[y][x] << " ";
        }
        cout << endl;
    }


    return 0;
}