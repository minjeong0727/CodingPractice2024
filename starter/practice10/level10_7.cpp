#include <iostream>
using namespace std;


int GOP(){
    int input1;
    int input2;
    cin >> input1 >> input2;
    return input1 * input2;
}

int SUM(){
    int input1;
    int input2;
    cin >> input1 >> input2;
    return input1 + input2;
}
int main(){
    int a = GOP();
    int b = SUM();

    if(a > b){
        cout << "GOP>SUM" ;
    }else if(a < b){
        cout << "GOP>SUM" ;
    }else if(a == b){
        cout << "GOP==SUM";
    }
    return 0;
}