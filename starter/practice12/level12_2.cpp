#include <iostream>
using namespace std;

int main(){

    char arr1[50];
    char arr2[50];

    cin >> arr1;
    cin >> arr2;
    int cnt = 0;

    for(int i = 0; i < 50; i++){
        if(arr1[i]=='\0'){
            cnt = i;
            break;
        }
    }

    cout << cnt << " ";

     for(int i = 0; i < 50; i++){
        if(arr2[i]=='\0'){
            cnt = i;
            break;
        }
    }

    cout << cnt << " ";
}