#include <iostream>
using namespace std;

int mc(int total){
  return total/2;
}

int kfc(int n){ 
    int ret = mc(n*2);
    return ret;
}


int main(){
    int ret = kfc(1500);
    return 0;
}