#include <iostream>
using namespace std;

int pingpong(int input){
    int tong = input;
    return tong + 10;
}

int main(){
    int stone;
    cin >> stone;
    int ret = pingpong(stone);
    cout << ret;

    return 0;
}
