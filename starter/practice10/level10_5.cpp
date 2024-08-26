# include <iostream>
using namespace std;


int main(){
    int map[3][3];
    int i = 1;
    int input;
    cin >> input;
    if(input%5 == 1){
        for(int x = 2; x >= 0; x--){
            for(int y = 2; y >= 0; y--){
                map[y][x] = i++;
            }
        }
    }else if(input%5 == 2){
        for(int y = 2; y >= 0; y--){
            for(int x = 0; x  < 3; x++){
                map[y][x] = i++;
            }
        }
    }else{
        i = 10;
       
        for(int y = 0; y <3; y++){
            for(int x = 0; x < 3; x++){
                map[x][y] = i++;
            }
        }
    }



     
        for(int y = 0; y < 3; y++){
            for(int x = 0; x <3; x++){
            cout << map[y][x] << " ";
        }
        cout << endl;
    }
    return 0;
}