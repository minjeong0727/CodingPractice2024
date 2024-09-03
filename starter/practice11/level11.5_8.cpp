#include <iostream>
using namespace std;

int main(){
    int map[3][3] = {
        {3, 1, 6},
        {7, 8, 4}, 
        {9, 2, 3}
    };

    int a, b, c;
    cin >> a >> b >> c;



    for(int y = 0; y < 3; y++){
        for( int x = 0; x < 3; x++){
            if(map[y][x] == map[a][b]){
                map[y][x] = c;
            };
            


        }
    }

    // for(int y = 0; y < 3; y++){
    //     for(int x = 0; x < 3; x++){
    //         cout << map[y][x] <<" ";
    //     }
    //     cout << endl;
    // }


    //MAX
    int max = 0;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(max < map[y][x]){
                max = map[y][x];
            }
        }
    }

    //MIN
    int min = 999;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(min > map[y][x]){
                min = map[y][x];
            }
        }
    }

    int sum = max + min;

    cout << sum;
}