#include<iostream>
using namespace std;
int main(){
    int ptr1[5];
    int *ptr2[5];
    for (int i=0 ; i<5 ; i++){
        cin>>ptr1[i];
    }
    for (int i=0 ; i<5 ; i++){
        ptr2[i]=&ptr1[i];
    }

    cout<<"the array of pointer: "<<endl;
    for(int i=0 ; i<5 ; i++){
        cout << *ptr2[i] <<endl; 
    }
}