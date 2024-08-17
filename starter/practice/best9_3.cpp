#include <iostream>
using namespace std;
int main()
{

    char vector[6] = {'A','F','G','A','B','C'};
    char input1, input2;
    int count1, count2;
    int i;
    cin >> input1 >> input2;
    count1 = 0;
    count2 = 0;
    for(i = 0; i < 6; i ++){
        if(vector[i] == input1){
            count1++;
        }
        if(vector[i]==input2){
            count2++;
        }

    }
    if(count1 > 0 && count2 >0){
        cout <<"와2개";
    }else if(count1 == 0 && count2 ==0){
        cout << "우0개";
    }else{
        cout <<"오1개";
    }
    return 0;
}