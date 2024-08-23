#include <iostream>
using namespace std;

int main(){
    char vector[6] = {'A','F','G','A','B','C'};

    char x, y;

    cin >> x;
    cin >> y;


    // int cnt = 0;

    // for(int i = 0; i < 6; i++){
    //     if(vector[i]==x && vector[i]==y){
    //         cnt+=2;
    //     }else if(vector[i]==x){
    //         cnt++;
    //         if(cnt == 2)cnt = 1;
    //     }else if(vector[i]==y){
    //         cnt++;
    //         if(cnt == 2)cnt = 1;
    //     }
    // }

    int cnt_x = 0, cnt_y = 0;
    for(int i = 0; i < 6; i++){
        if(vector[i]==x){
            cnt_x++;
        }
        if(vector[i] == y && y != x){
        cnt_y++;
        if(cnt_y>=2)cnt_y = 1;
        }
    }        
    int cnt = cnt_x + cnt_y;

    if(cnt >= 2){
        cout << "와" << cnt << "개";
    }else if(cnt == 1){
        cout << "오" << cnt << "개";
    }else if(cnt == 0){
        cout << "우" << cnt << "개";
    }

    return 0;
}




