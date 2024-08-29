#include<iostream>
using namespace std;



int print(int t1, int t2){
    cout << "합:" << t1 << endl;
    cout << "차:" << t2 << endl;
}

int sum(int a, int b){
    return a + b;
}

int comp(int a, int b){
    return a - b;
}

int main(){
    int a, b;
    cin >> a >> b;

    int s = sum(a, b);
    int c = comp(a, b);
    print(s, c);
}