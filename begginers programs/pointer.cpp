#include <iostream>  
using namespace std;  

int main(){
    int num=30;
    int * p;
    p=&num;//stores the address of variable num
    cout<<"address of num variable is"<<&num<<endl;
    cout<<"address of p variable is"<<p<<endl;
    cout<<"value of p variable is"<<*p<<endl;
}