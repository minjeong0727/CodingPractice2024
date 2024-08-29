#include <iostream>
using namespace std;

int main(){
    int g = 19;
    int *a = &g;
    
    int c = 15;
    int *b = &c;
    int *t = &c;
    cin >> *b;



    cout << *a << endl;
    cout << *t;
}

    //1. 포인터 변수는 주소를 저장
    //2. 주소를 저장하는 것을 "가리킨다"라고 표현
    //3. 가리킬때, *를  원격접근 가능
    //포인터를 쓰는 경우 : return 2개 못함,,,여러개를 리턴할때 포인터를 써서 해결한다.