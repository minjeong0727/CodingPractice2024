#include <iostream>
using namespace std;

int main(){
    int map[2][3]= {
        {4, 6, 9},
        {3, 7, 9}
    };

    int flag = 0;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(map[y][x] == 9){
                flag = 1;
                break;
            }
        }
        if(flag == 1)break;
    }

    if(flag ==0) cout << "X";
    if(flag ==1) cout << "O";

return 0;
}