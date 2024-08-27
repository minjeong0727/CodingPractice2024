#include <iostream>
using namespace std;
int main(){

    int map[5][5] = { 0 };
    int i = 1;

    for(int x = 4; x >= 0; x--){
        for(int y = 0; y <= 4; y++){
            map[y][x] = i++;
        }
    }

    int input;

    cin >> input;
    for(int y = 0; y < 5; y++){
        for( int x = 0; x < 5; x++){
            if(input == y){
                map[y][x] = input;
            }
            cout << map[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}

