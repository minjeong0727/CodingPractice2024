#include <iostream>
using namespace std;


char calculator(){
    int score;
    cin >> score;

    if(score >= 90)return 'A';
    else if(score<90 && score >= 80)return 'B';
    else if(score<80 && score >= 70)return 'C';
    else return 'D';
}


int main(){
    cout << calculator();

    return 0;
}