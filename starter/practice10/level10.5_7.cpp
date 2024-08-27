#include <iostream>
using namespace std;



char aToZ(){
    char input;
    cin >> input;

   if(input >= 'A' && input <= 'Z'){
    if(input < 'N'){
        return 'A';
    }else{
        return 'Z';
    }
   }
}

int main(){
    cout << aToZ();

return 0;
}

