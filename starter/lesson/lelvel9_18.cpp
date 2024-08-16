#include <iostream>
using namespace std;

int main(){
    char arr[3][2] = {{'B','T'},{'S','H'},{'O','T'}};

    int x;
    cin >> x;
    
    int cnt = 0;
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 2; j++){
            if(arr[i][j] == x)cnt++;
        }
    }
    cout << cnt;

}