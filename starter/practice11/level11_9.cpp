#include <iostream>
using namespace std;

int main(){
    //for문을 돌려 문자 8개를 만들자
    char vect[8];
    for(int i = 0; i < 8; i++){
        cin >> vect[i];
    }

    char big[8];
    char small[8];

    //big과 small 배열의 인덱스를 위한 변수 초기화
    int bigIndex = 0;
    int smallIndex = 0;

    for(int i = 0; i < 8; i++){
        if(65 <= vect[i] && vect[i] < 91){
            big[bigIndex++] = vect[i];
        }
        if(97<= vect[i] && vect[i] < 129){
            small[smallIndex++] = vect[i];
        }
    }


    //대문자와 소문자를 출력
    cout << "big=";
    for(int i = 0; i < bigIndex; i++){
        cout << big[i];

    }
    cout << endl;


    cout << "small=";
    for(int i = 0; i < smallIndex; i++){
        cout << small[i];
    }
    cout << endl;

    return 0;
}