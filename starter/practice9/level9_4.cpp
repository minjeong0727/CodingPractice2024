#include <iostream>
using namespace std;

int main(){
    int vector[6] = {3, 4, 2, 5, 7, 9};

    int a;
    int b;

    cin >> a;
    cin >> b;

    //a에 0번 b에 1번 입력받았다면 그 둘을 스왑하면된다.
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    

    tmp = vector[a];
    vector[a] = vector[b];
    vector[b] = tmp;

    for(int i = 0; i < 6; i++){
       cout << vector[i] << " ";
    }


}
