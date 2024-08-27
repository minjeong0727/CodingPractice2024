#include <iostream>
using namespace std;

struct fruit
{
    int size;
    int price;
};


int main(){
    fruit apple;
    fruit banana;

    cin >> banana.size;
    cin >> apple.size;

    int bananaPrice = banana.size * 250;
    int applePrcie = apple.size * 500;

    int sum = bananaPrice + applePrcie;

    cout << sum << "원";


return 0;
}