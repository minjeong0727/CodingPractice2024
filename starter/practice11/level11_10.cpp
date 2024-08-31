#include <iostream>
using namespace std;


int map[2][5] = {
    {3, 2, 6, 2, 4},
    {1, 4, 2, 6, 5}
};


int KFC(int target){
    for(int y = 0; y < 2; y++){
        for(int x = 0; x < 5; x++){
            if(map[y][x]==target)return 1;
            
        }
    }
    return 0; 
}
int main(){
    int target;
    cin >> target;

    int yesNo = KFC(target);
    if(yesNo == 1)cout << "값이 존재합니다";
    if(yesNo == 0)cout << "값이 없습니다";
}