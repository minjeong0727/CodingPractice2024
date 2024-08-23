#include <iostream>
using namespace std; 

char vect[4] = {'A','Q','R', 'T'};

void gogo(int a, int b){
    int temp = vect[a];
    vect[a] = vect[b];
    vect[b] = temp;
}

int main(){
   
    gogo(0,1);
    gogo(1,2);
    gogo(2,3);



    // for(int i = 0; i <= 2; i++){
    //     gogo(i, i+1);
    // }
    return 0;
}