#include <iostream>
using namespace std;
int main(){
    int cnt1 = 0;
    int cnt2 = 0;
    char arr[2][3];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j <3; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j <3; j++){
            if(arr[i][j]>=65 && arr[i][j] <= 90){
                cnt1++;
            }else if(arr[i][j] >=97 && arr[i][j] <= 122){
                cnt2++;
            }
        }
    }

    cout << "대문자"<< cnt1 <<"개" << endl;
    cout << "소문자"<< cnt2 << "개" << endl;
    
    
}