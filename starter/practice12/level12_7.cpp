#include <iostream>
using namespace std;


int count(char input[], char word){
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(input[i] == word){
            cnt+= 1;
        }

    }
    return cnt;
}

int main(){
    char input[10];
    cin >> input;

    char a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << a << "=" << count(input,a) << endl;
    cout << b << "=" << count(input,b) << endl;
    cout << c << "=" << count(input,c) << endl;
}