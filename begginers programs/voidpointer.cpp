#include <iostream>

using namespace std;

int main(){
    void *ptr; //void pointer declaration
    int a=9; //initialization of of var int 

    ptr = &a;  //stroing the address of variable a in void pointer

    cout<<"the address of variable a: "<<&a<<endl;
    cout<<"the address of pointer ptr: : "<<&a<<endl;
}

        