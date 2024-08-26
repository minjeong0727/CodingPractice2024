#include <iostream>
using namespace std;
int main(){
    
    int map[4][4];
    char MAP[4][4];
    
    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
        cin >> map[y][x];
        }
    }



    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){

             
            if(map[y][x]%2==0){
                MAP[y][x] = '#';
                
                if(map[y][x] == 0){
                MAP[y][x] = '!';
            }
            }else if(map[y][x]%2==1){
                MAP[y][x] = '@';
            }


           
            cout << MAP[y][x];
        }
        cout << endl;
    }
    return 0;
}

