#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    char oper;

    cout<<"enter num1 numbers";
    cin>>num1;
    cout<<"enter num2 numbers";
    cin>>num2;

    cout<<"enter the operator: +,-,*,/";
    cin>>oper;

    switch(oper){
        case '+' :
            cout<<num1+num2;
            break;
        case '-' :
            cout<<num1-num2;
            break;
        case '*' :
            cout<<num1*num2;
            break;
        case '/' :
             cout<<num1/num2;
            break;
        default:
            cout<<"error, invalid operator";
            break;
    }
    return 0;
}