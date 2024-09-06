#include <iostream>
using namespace std;

int main(){
  int vect[3][4] = { 0 };
  int b;
  int x, y;

  cin >> b;

  for(y = 0; y < 3; y++){
    for(x = 2- y; x < 4; x++){  //x = 2-y 배열의 시작위치 조정
        vect[y][x] = b;
        b++;
    }
  }

  for(y = 0; y < 3; y++){
    for(x=0; x < 4; x++){
        if(vect[y][x]==0)cout << " ";
        else cout << vect[y][x];
    }
    cout << endl;
  }
  return 0; 
}