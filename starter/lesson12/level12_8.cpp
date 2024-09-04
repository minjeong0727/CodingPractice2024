#include <iostream>
using namespace std;

int main(){

    char v[10];
    cin >> v;

    int len;
    for(int i = 0; i < 10; i++){
        if(v[i] == '\0'){
            len == i;
            break;
        }
    }
    char temp = v[0];
    v[0] = v[len-1];
    v[len-1] = temp;


    cout << v;
    return 0;
}