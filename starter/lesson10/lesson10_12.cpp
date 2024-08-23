#include <iostream>
using namespace std;

int gob(int a,int b){
    return a*b;
}

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << gob(a,b);

}