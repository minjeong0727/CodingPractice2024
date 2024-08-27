#include <iostream>
using namespace std;
int vect[7][5] = {
   {1,0,0,0,0},
{1,0,1,0,0},
{1,1,0,1,0},
{1,0,1,0,0},
{0,1,0,0,1},
{0,0,0,1,0},
{1,1,0,0,0} 
};

int input(){
    int t;
    cin >> t;
    return t;

}

int process(int t){
    int cnt = 0;
    int y;
    for(y = 0; y < 7; y++){
        if(vect[y][t] == 1){
            cnt++;
        }
    }
    return cnt++;
}

void output(int t){
    cout < t;
}



int main(){
    int t;
    int cnt;
    t = input();
    cnt = process(t);
    output(cnt);
}