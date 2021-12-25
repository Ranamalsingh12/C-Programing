#include <iostream>  
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a = ";
    cin>>a;
    cout<<"enter the value of b = ";
    cin>>b;
    if(a<b){
        a=(a+b)-a;
        b=(a-b)+a;
        cout<<a<<" "<<b;
    }
    if(a>b){
        a=(a-b)+a;
        b=(a+b)-a;
        cout<<a<<" "<<b;
    }
}