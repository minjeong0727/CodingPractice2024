#include <iostream>
using namespace std;
int bigbig(int a, int b, int c){
    int arr[3] = {a,b,c};
    int max = arr[0];;
    for(int i = 0; i < 3; i++){
        if(max < arr[i]){
            max = arr[i];
        }  

    }
    return max;
}
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << bigbig(a,b,c);
    return 0;
}