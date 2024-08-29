
#include <iostream>
using namespace std;

int main(){
    
    int b = 15;
    int *a = &b;

    *a = 50;
    cout << b;
}

 //1. 포인터 변수는 주소를 저장
    //2. 주소를 저장하는 것을 "가리킨다"라고 표현
    //3. 가리킬때, *를  원격접근 가능