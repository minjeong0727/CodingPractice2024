#include <iostream>
using namespace std;


int main(){

    int studentArr[6][2];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j <2; j++){
            cin >> studentArr[i][j]; 
        }
    }

    int cnt = 0;

    for(int i = 0; i < 6; i++){
        
        if(studentArr[i][0]<studentArr[i][1]){
        int tmp;
        tmp = studentArr[i][0];
        studentArr[i][0] = studentArr[i][1];
        studentArr[i][1] = tmp;
        cnt++;
        }
       
    }
    for(int i = 0; i < 6; i++) {
        cout << studentArr[i][0] <<" " << studentArr[i][1] << endl;
    }

    
    cout << cnt << "명";
    return 0;

}
