#include <iostream>
using namespace std;

int main(){

    char map[3][5] = {
        {'a','b','a','c','z'},
        {'c','t','a','c','d'},
        {'c','c','c','c','a'}
    };

    char input;
    cin >> input;
    int cnt = 0;

    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 5; x++){
            if(map[y][x] == input){
                cnt++;
            }
        }
    }

    if(cnt >= 3 && cnt < 5){
        cout << "이야";
    }else if(cnt >= 5 && cnt < 7){
        cout << "와우";
    }else if(cnt >= 7){
        cout << "세상에";
    }else cout << "이런";


    return 0;
}