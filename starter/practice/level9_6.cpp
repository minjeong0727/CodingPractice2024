#include <iostream>
using namespace std;


struct xy {
    int x;
    int y;
};


int main(){
    char arr[3][3];

    char letter = 'A';
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = letter;
            ++letter;
        }
    }

    xy ssang1;
    xy ssang2;

    cin >> ssang1.x >> ssang1.y;


    cin >> ssang2.x >> ssang2.y;



    
    char tmp = arr[ssang1.x][ssang1.y];
    arr[ssang1.x][ssang1.y] =  arr[ssang2.x][ssang2.y];
    arr[ssang2.x][ssang2.y] = tmp;

   for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           cout << arr[i][j];
          
        }
        cout << endl;
    }

    return 0;
}
