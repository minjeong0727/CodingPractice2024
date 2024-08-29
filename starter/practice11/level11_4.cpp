#include <iostream>
using namespace std;

int main(){
    char a, b, c;
    cin >> a >> b >> c;

    char *pa = &a;
    char *pb = &b;
    char *pc = &c;

    cout << (*pa += 1) << " " << (*pb += 1) <<" " << (*pc += 1);
}