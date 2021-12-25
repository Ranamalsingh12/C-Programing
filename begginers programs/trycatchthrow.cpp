#include <iostream>
#include<string.h>
using namespace std;  
float division(int x, int y) {
    if(y==0){
        throw"attemped to divide by 0";
    }
   return (x/y);  
}  
int main () {  
   int i = 50;  
   int j = 0;  
   float k = 0;  
      k = division(i, j);  
      cout << k << endl;  
   return 0;  
}
