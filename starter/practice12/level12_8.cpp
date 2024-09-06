#include <iostream>
using namespace std;

int main(){
    char sample[10] = "DATAPOWER";

    int a, b;
    cin >> a >> b;

    char test[10];
    int index = 0;
    for(int i = a; i <= b; i++){
        test[index] = sample[i];
        index++;
    }
    test[index] = '\0';


    cout << test << endl;

}