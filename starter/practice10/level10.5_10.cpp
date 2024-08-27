#include <iostream>
using namespace std;
   int map[7][5] = {
        {1,0,0,0,0},
        {1,0,1,0,0},
        {1,1,0,1,0},
        {1,0,1,0,0},
        {0,1,0,0,1},
        {0,0,0,1,0},
        {1,1,0,0,0}
    };

int output(int pCount){
    cout << pCount;
}

int process(int xNum){
    int count = 0; 

    for(int y = 0; y <7; y++){
        for(int x = 0; x<5; x++){
            if(xNum == x && (map[y][x]==1))count++;
        }
    }
    return count;
}

int input(){
    int input;
    cin >> input;
    return input;
}



int main(){
 
    int xNum = input();
    int pCount = process(xNum);
    output(pCount);

    return 0;
}