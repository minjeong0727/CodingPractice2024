#include <iostream>
using namespace std;
int main(){
    int arr[8] = {4,3,6,1,3,1,5,3};

    int x;
    cin >> x;

    int cnt = 0;

    for(int i = 0; i < 8; i++){
        if(arr[i] == x){
            cnt++;
        }
    }
    cout << "숫자" << x << "개수는" << cnt << "개";
    return 0;

}