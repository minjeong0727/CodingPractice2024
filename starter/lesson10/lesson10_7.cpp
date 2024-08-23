#include <iostream>
using namespace std;

int main(){
    int map[3][4] ={

        3, 3, 1, 2,
        1, 1, 3, 2,
        3, 3, 2, 1
    
    };

    for(int y; y < 3; y++){
        for(int x; x < 4; x++){
            if(map[y][x] == 3)cout << "@";
            else if(map[y][x] == 1) cout << "a";
            else cout << "!";
        }
        cout << endl;
    }
    return 0;

}