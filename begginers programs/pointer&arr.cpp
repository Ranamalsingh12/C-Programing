#include<iostream>

using namespace std;

int main(){
    int *ptr; //integer pointer declaration
    int marks[5];
    for (int i=0 ; i<5;i++){
        cout<<marks[i]<<endl;
    }
    ptr = marks; ///ptr and array pointing to the same elenent

    cout<<"value of ptr is: "<<*ptr<<endl;
    cout<<"value of marks is: "<<*marks<<endl;
}