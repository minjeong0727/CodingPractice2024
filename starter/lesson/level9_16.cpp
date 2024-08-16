#include  <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    int cnt =0 ;

    int arr[6] = {4,4,4,6,1};
    for(int i = 0; i < 6; i++) {
        if(arr[i] == x){
            cnt++;
        }
    }
    cout << cnt << "개";
    return 0;
}
