#include <iostream>
using namespace std;

int main(){
    int vect[7];

    for(int i = 0; i < 7; i++){
        cin >> vect[i];
    }



    int maxCh = 0;
    for(int i = 0; i < 7; i++){
       if(maxCh < vect[i]){
            maxCh = vect[i];
       }
    }

    int minCh = 999;
    for(int i = 0; i < 7; i++){
        if(minCh > vect[i]){
            minCh = vect[i];
        }
    }
    


    cout << "MAX=" << maxCh << endl;
    cout << "MIN=" << minCh << endl;
    
}