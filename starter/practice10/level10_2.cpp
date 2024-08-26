#include <iostream>
using namespace std;



int main(){
    int input;
    int map[4][4];
    cin >> input;

    if(input%2==0){//짝수일 경우
        for(int y = 0; y < 4; y++){
            for(int x = 0; x < 4; x++){
                map[y][x] = 0;

                map[0][0] = 1;
                map[1][1] = 2;
                map[2][2] = 3;
                map[3][3] = 4;
            }
        }
    }else if (input%2 == 1){
          for(int y = 0; y < 4; y++){
            for(int x = 0; x < 4; x++){
                map[y][x] = 0;
                map[0][3] = 1;
                map[1][2] = 2;
                map[2][1] = 3;
                map[3][0] = 4;
                
            }
        }
    }


    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            cout << map[y][x] << " ";
        }
        cout << endl;
    }
}
