#include <iostream>
using namespace std;

void abc(int x){
    for(int i = 0; i < x; i++){
        cout << "#";
    }
    cout<<endl;
}
int main(){
    abc(7);
    abc(5);
    abc(3);



}
