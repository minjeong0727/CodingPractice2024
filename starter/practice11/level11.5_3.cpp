#include <iostream>
using namespace std;

int main(){
    char arr[8] = {'A', '1','1', '1', '5', 'A', 'w','z'};
    char input;
    cin >> input;

    int cnt = 0; 
    for(int i = 0; i < 8; i++){
        if(input == arr[i]){
            cnt++;
        }
    }


    if(cnt >= 3) cout << "THREE";
    else if(cnt ==2) cout << "TWO";
    else if(cnt == 1) cout << "OME";
    else if(cnt == 0) cout << "NOTHING";
}