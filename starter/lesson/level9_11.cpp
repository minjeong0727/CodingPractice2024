#include <iostream>
using namespace std;

int main(){
    struct BTS{
        char t1;
        int t2;
        int t3;
    };

    BTS a;
    a.t1 = 'A';
    a.t2 = 5;
    a.t3 = 9;

    BTS b;
    b.t1 = 'a';
    b.t2= -5;
    b.t3 = -77;


    cout << a.t1 << a.t2 << a.t3 << endl;
    cout << b.t1 << b.t2 << b.t3 << endl;
    return 0;
}