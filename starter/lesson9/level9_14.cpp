#include <iostream>
using namespace std;

void bhc(char x, int y){
    for(int i = 0; i< y; i++){
        cout << x;
    }
    cout << endl;
}

int main(){
    char ch;
    int num;
    cin >> ch;
    cin >> num;

    bhc(ch, num);
    return 0;
}

