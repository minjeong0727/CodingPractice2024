#include <iostream>
using namespace std;

int main(){
    int vect[6] = {4,4,4,3,2,1};
    int cnt = 0;

    for(int i = 0; i < 6; i ++){
        if(vect[i]%2 ==0){cnt++;}
    }
    cout << cnt;
    return 0;
}