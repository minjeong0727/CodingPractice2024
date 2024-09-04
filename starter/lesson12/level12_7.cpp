#include <iostream>

using namespace std;


char v[10];

char gogo(){
    int len;
    for(int i = 0; i < 10; i++){
        if(v[i] == '\0'){
            len = i;
            break;
        }
    }
    return v[len-1];
}
int main(){

    cin >> v;
    char a =  gogo();

    cin >> v;
    char b = gogo();

    cout << a << b;
    return 0;
}