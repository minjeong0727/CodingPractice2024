#include <iostream>
using namespace std;

int main(){
    int vect[6] = {1, 4, 2, 9, 9, 9};
    // int cnt = 0;
    // for(int x = 0; x < 6; x++){
    //    if(vect[x] == 9)cnt++;
    // }
    // if(cnt > 0) cnt <<"O";
    // else cnt << "X"; 


    //존재여부
    int flag = 0;
    for(int x = 0; x < 6; x++){
        if(vect[x] == 9){
            flag = 1;
            break;
        }

    }
    if(flag ==0)cout << "X";
    else cout << "O";

    return 0;
}