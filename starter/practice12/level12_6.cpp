#include <iostream>
using namespace std;

char word[10] = "MINQUEST";

//문장의 글자 수를 구하는 함수

int count(int input){
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(input == '\0'){
            cnt+=1;
            break;
        }
        
    }
    return cnt;
}

//입력 받은 문자가 몇 번째 인덱스에 존재하는 지 알아내는 함수
int index(char input){
    int index = 0;
    for(int i = 0; i < 10; i++){
        if(word[i] == input){
            index = i;
        }
    }
    return index;
}

// Length함수
int length(int input){
    int index = 0;
    for(int i = 0; i < 10; i++){
        if(input == word[i]){
            index = i;
        }
    }
    return index;
}



int main(){
    char input1, input2, input3;
    cin >> input1;
    cin >> input2;
    cin >> input3;

    cout << input1 << "=" << length(input1) << endl;

    cout << input2 << "=" << length(input2) << endl;


    cout << input3 << "=" << length(input3) << endl;



   
}