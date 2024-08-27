#include <iostream>
using namespace std;

int run(int input){
    int map[3][3] = { 0 };
    int i = 1;
    if(input < 10)
    {
        for(int y = 0; y < 3; y++){
            for(int x = 0; x < 3; x++){
                map[y][x] = i++;
            }
        }
       
    }else if(input >= 10)
    {
        for(int y = 0; y < 3; y++){
            for(int x = 2; x >= 0; x--){
                map[y][x] = i++;
            }
        }
        
    }



    ///////
    for(int y = 0; y <3; y++){
        for(int x = 0; x <3; x++){
            cout << map[y][x];
        }
        cout << endl;
    }
}

int main(){
    int input;
    cin >> input;
    run(input);
}