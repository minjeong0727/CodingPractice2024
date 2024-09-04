#incldue <iostream>
using namespace std;
int main(){
   char v[10];
   cin >> v;

   int len = 0;
   for(int i = 0; i < 10; i++){
    if(v[i] == '\0'){
        len = i;
        break;
    }
   }

   int flag = 0;
   for(int i = 0; i < 10; i++){
    if(v[i]=='Z'){
        flag = 1;
        break;
    }
   }

   if(flag)cout <<"O";
   else cout << "X";

   return 0;
}