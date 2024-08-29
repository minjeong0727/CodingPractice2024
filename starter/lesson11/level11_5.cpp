#include <iostream>
using namespace std;


int main(){

    int map[3][3] = {
        {5, 7, 9},
        {1, 5, 6}.
        {5 , 6, 7}
    }
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            
            if(map[y][x]%2==0)return 0;
        }
        cout << map[y][x]
    }
    cout << endl;
}

//break:for문을끈다
//return 0: 함수 자체를 끈다.