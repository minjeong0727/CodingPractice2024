#include <iostream>
using namespace std;

void abbt(int a, int b, int c, int d){
    int OneTeam = a *b;
    int TwoTeam = c *d;

    if(OneTeam > TwoTeam) cout << "1팀 win\n";
    else if(OneTeam < TwoTeam)cout << "2팀 win\n";
    else cout << "draw";

}

int main(){
    abbt(1, 4, 5, 7);
    abbt(1, 3, 6, 9);
    return 0;
}