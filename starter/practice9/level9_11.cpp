#include <iostream>
using namespace std;

struct Person{
    int age;
    int height;

};


int main(){
    Person a;
    Person b;

    cin >> a.age;
    cin >> a.height;

    cin >> b.age;
    cin >> b.height;

    int averageAge = (a.age + b.age)/2;
    int averageHeight = (a.height + b.height)/2;

    cout << averageAge << ' ' << averageHeight;

}