#include <iostream>
using namespace std;



int count(int map[3][3], int num){
    int counting = 0;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(map[y][x] == num){
                counting++;
            }
        }
    }
    return counting; 
}

int main(){
   int map[3][3] = {
    {1, 1, 1},
    {1, 2, 1},
    {3, 6, 3}
   } ;
    int num;
    cin >> num;

    int cnt =  count(map, num);
    cout << cnt;
}