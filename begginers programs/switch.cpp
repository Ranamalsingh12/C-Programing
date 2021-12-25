#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a num to check the grade";
    cin>>num;
    switch(num){
        case 10:
        cout<<"grade is 10";
        break;
        case 20:
        cout<<"grade is 20";
        break;
        default :
        cout<<"neither 10 nor 20 grade";
        break;
    }
}