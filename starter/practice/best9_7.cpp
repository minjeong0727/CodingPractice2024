#include <iostream>
using namespace std;
int main(){
    int vect[6][2];
    int x, y;
    for(y = 0; y < 6; y++){
        for(x = 0; x < 2; x++){
            cin >> vect[y][x];
        }
    }
    int cnt = 0;
    int temp;
    for(y = 0; y < 6; y++){
        if(vect[y][0] < vect[y][1]){
            temp = vect[y][0];
            vect[y][0] = vect[y][1];
            vect[y][1] = temp;
            cnt++;
        }
    }

    for(y = 0; y < 6; y++){
        for(x = 0; x < 2; x++){
            std::cout << vect[y][x] << " ";

        }
        std::cout << endl;
    }
    std::cout << cnt <<"명";
    return 0;
}