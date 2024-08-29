#include <iostream>
using namespace std;

int main(){

    //max
    int vect[7] = {5, 6, 7, 1, 6, 7, 5};

    int t = 0;
    
    for(int i = 0; i < 7; i++){
        if(vect[i] > t){
            t = vect[i];
        }
    }
    cout << t << endl;


   
   //min
   t = 9999; //배열 중 하나를 넣거나 굉장히 큰값을 넣거나 둘 중 하나
    for(int i = 0; i < 7; i++){
       
        
        if(vect[i] < t){
            t = vect[i];
        }

    }
    cout << t;
}