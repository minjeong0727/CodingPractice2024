#include <iostream>
usint namespace std;
int print(int n){
     for(int i = n; i >=0; i-=7){
        if(i % 2 == 0)return n;;
        cout << i <<" ";
    }
    return 0;
}

int main(){
    int ret = print(20);
    cout << ret;

    return 0;
}