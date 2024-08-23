#include <iostream>
using namespace std;


int main(){

int vect[3][4] = {
    {1,3,5, 7},
    {9,5,4,2},
    {6,6, 5,7}
};

int sum1 = 0; 
int sum2 = 0;
int sum3 = 0;
for(int i = 0; i <3; i++){
    sum1 += vect[i][3];
    sum2 += vect[i][1];

}

for(int i = 0; i < 4; i++){
    sum3 += vect[2][i];
}
cout << sum1 << sum2 << sum3;

return 0;
}
