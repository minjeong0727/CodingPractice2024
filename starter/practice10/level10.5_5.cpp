#include <iostream>
using namespace std;

int main(){
    int map[3][4] = { 0 };
    int a, b, c;
    cin >> a >> b >> c;


    //첫 번째 행에 대해 a부터 시작하여 채우기
    for(int x = 0; x < 4; x++){
        map[0][x] = a+ x;
    }
    //두 번째 행에 대해 b부터 시작하여 채우기
    for(int x = 0; x < 4; x++){
        map[1][x] = b + x;
    }
    //세 번째 행에 대해 c부터 시작하여 채우기
    for(int x = 0; x < 4; x++){
        map[2][x] = c+ x;
    }


    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 4; x++){
            cout << map[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}