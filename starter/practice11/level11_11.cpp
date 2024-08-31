#include <iostream>
using namespace std;

int main(){
    int map[4][4] = {
        {1, 3, 6, 2},
        {4, 2, 4, 5},
        {6, 3, 7, 3},
        {1, 5, 4, 6}
    };

    int input;
    cin >> input;

    int select[16];
    int selectIndex = 0;

    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            if(map[y][x] > input){
                select[selectIndex++] = map[y][x];
            }
        }
    }


    
    for(int i = 0; i < selectIndex; i++){
        
        if(select[i]!=0){
            cout << select[i] << " ";
        }
             
          
    }
    cout << endl;
    
    return 0; 
}