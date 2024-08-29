#include <iostream>
using namespace std;

int main(){
    int a;
    char gd;

    cin >> a;
    cin >>gd;

    int *p = &a;
    char *t = &gd;

    cout << *p << " " << *t;
    return 0; 
}