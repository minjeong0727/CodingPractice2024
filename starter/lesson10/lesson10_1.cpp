#include <iostream>
using namespace std;
struct CHO{
    int a;
    int b;
    int c;
};
int main(){
    CHO x = {3, 5, 7};
    CHO y = {1, 4, 5};;

    cout << x.a + y.a <<endl;
    cout << x.b + y.b << endl;
    cout << x.c /y.c << endl;

    return 0;
}