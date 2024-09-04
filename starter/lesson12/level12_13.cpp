#include <iostream>
using namespace std;


int main(){
    
    for(int y = 0; y < 3; y++){
        for(int x = 0; x <= y; x++){
            cout << "#";
        }
        cout << endl;
    }
    return 0; 
}