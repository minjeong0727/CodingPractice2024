#include <iostream>
using namespace std;
int main(){
    char arr[3][3];
    char t = 'A';
    int x, y, x1,y1,x2,y2;
    int temp;
    for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
            arr[y][x] = t;
            t++;
        }
    }
    cin >> y1 >> x1 >> y2 >> x2;

    temp = arr[y1][x1];
    arr[y1][x1] = arr[y2][x2];
    arr[y2][x2] = temp;
    for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
            cout << arr[y][x];
        }
        cout << endl;
    }
    return 0;
}