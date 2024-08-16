#include <iostream>
using namespace std;


void sum(int a, int b, int c){
    cout << a+ b+ c;
}

void cha(int a, int b, int c){
    cout << a-b-c;
}


int main(){
    int x = 0;
    int y = 0 ;
    int z = 0;
    sum(x,y,z);
    cha(x,y,z);

    return 0;
}
