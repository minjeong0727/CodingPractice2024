#include <iostream>
using namespace std;

//전역 배열
char map[3][5] = {
    {'D', 'A', 'C', 'C','D'},
    {'S','D','F','A','E'},
    {'E','E','T','J','H'}
};

int check(char d){
  
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 5; x++){
            if(map[y][x] == d){
                return 1;   //문자가 있다
                break;
            }
        }
       
    }
    return 0; //문자가 없다
}

void input(){
    char input; //입력문자
    cin >> input;
    int value = check(input);
    if(value == 1){
        cout << "있음";
    }else if(value ==0){
        cout << "없음";
    }
}

int main(){

    // for(int y = 0; y < 3; y++){
    //     for(int x = 0; x < 5; x++){
    //         cout << map[y][x]<<" ";
    //     }
    //     cout << endl;
    // }


    input();
    return 0;
}

