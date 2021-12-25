#include <iostream>
#include<math.h>
using namespace std;  
// void func() {    
//    static int i=0; //what is static variable    
//    int j=0; //local variable    
//    i++;    
//    j++;    
//    cout<<"i=" << i<<" and j=" <<j<<endl;    
// }    
// concept of call stack : when we create a frame system asigned a memory to function and we call it a stack frame and it pushed to stack from the top. most stack frame is the active frame. which on the top will get executed first.when function return something it got poped

int isprime(int num){
   for (int i=2;i<sqrt(num);i++){
      if(num%i==0){
         return false;
      }
      return true;
   }
}

int main()  
{     
   int a,b;
   cin>>a>>b;

   for (int i=a; i<=b;i++){
      if(isprime(i)){
         cout<<i<<endl;
      }
   }

}  