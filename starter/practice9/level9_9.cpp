#include <iostream>
using namespace std;

 char arr[2][3] = {
        {'F','E','W'},
        {'D','C','A'}
    };

void findCh(char target){
    int cnt = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j]==target){
                cnt++;
            }
        }
    }
    if(cnt != 0){
        cout << "발견";
    }else cout << "미발견";
}


int main(){
   
    char x;
    cin >> x;

    findCh(x);


    return 0;
}
