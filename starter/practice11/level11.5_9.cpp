#include <iostream>
using namespace std;

int main(){
   
   
    int map[2][3];
    int num;
    for(int y = 1; y >=0; y--){ // y를 0부터 1까지 증가
        for(int x = 2; x >= 0; x--){ // x를 0부터 2까지 증가
            cin >> num;
            map[y][x] = num;
        }
    }


    int vect[6];
    int index = 0;

    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 3; x++){
            vect[index] = map[y][x];
            index++;
        }
    }

    int tmp;
    tmp = vect[0];
    vect[0] = vect[5];
    vect[5] = tmp; 

   

    for(int i = 0; i  < 6; i++){
        cout << vect[i] << " ";
        
    }
    cout << endl;

    return 0;
}