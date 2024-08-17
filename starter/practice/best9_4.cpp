#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {3,4,2,5,7,9};
    int a, b,x;
    int temp;
    cin >> a >>b;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

    for(x = 0; x < 6; x++){
        cout << arr[x] << " ";
    }
    return 0;

}