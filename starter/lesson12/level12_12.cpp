#include <iostream>
using namespace std;

int main(){


    //1. 문자열 입력
    //2. 문자 입력
    //입력받은 문자가, 문자열에 몇개 있는지 출력

    char v[20] = { 0 };
    cin >>v;

    char ch;
    cin >> ch;


    int len = 0;
    for(int i = 0; i < 50; i++){
        if(v[i] == '\0'){
            len = i;
            break;
        }
    }
    int cnt = 0;
    for(
        int i = 0; i < len; i++){
        if(v[i] == ch)cnt++;
    }
    

    return 0;
}