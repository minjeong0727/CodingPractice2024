#include <iotream>
using namespace std;

int main(){
    int arr[4] = {4, 2, 5, 9};

    int *a = &arr[1];
    int *t = &arr[2];
    int *r = &arr[3];
    int *v = &arr[3];

    cout << *v << " ";
    cout << *a < " ";
    cout << *t + *v << " ";
 }