#include <iostream>
using namespace std;

int main(){
    int map[4][4] = { 0 };


    int i = 1;

    for(int x = 0; x <4; x++){
        for(int y = 0; y <4; y++){
            map[y][x] = 2 * (i++);
            
        }
        
    }

    for(int y = 0; y < 4; y++){
        for(int x = 0; x <4; x++){
            cout << map[y][x] <<" ";
        }
        cout << endl;
    }



    return 0;
}