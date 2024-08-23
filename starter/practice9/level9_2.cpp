#include <iostream>
using namespace std;

int main() {
    char vector[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},  
        {'E', 'A', 'B', 'A', 'B'},
        {'A', 'C', 'D', 'E', 'R'}
    };

    char target;
    int cnt = 0;
    cin >> target;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (vector[i][j] == target) {
                cnt++;
            }
        }
    }

    if (cnt >= 3) {
        cout << "대발견";
    } else if (cnt > 0) {
        cout << "발견";
    } else {
        cout << "미발견";
    }

    return 0;
}
