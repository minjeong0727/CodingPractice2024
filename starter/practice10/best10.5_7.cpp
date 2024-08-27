#include <iostream>
using namespace std;

char aToZ(){
    char ch;
    cin >> ch;
    if(ch - 'A' < 'Z'-ch)return 'A';
    return 'Z';
}
int main(){
    cout << aToZ();
    return 0;
}