#include <iostream>
using namespace std;



char map[3][3] = {
    {'a','b', 'd'},
    {'e', 'w','z'},
    {'q','v','a'}
};


string process(char input){
    char changeInput = input + ('a'- 'A');
    int flag = 0;
    for(int y = 0; y < 3; y++){
        for(int x = 0; x < 3; x++){
            if(map[y][x] == changeInput){
                flag++;
                break;
            }
        }
    }

    if(flag >0)return "존재";
    if(flag == 0)return "없음";
}
char input(){
    char input;
    cin >> input;

    return input;
}



int main(){
    char word = input();
    cout << process(word);
}