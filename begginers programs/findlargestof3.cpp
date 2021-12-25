#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b & a>c){
        cout<<"a is the largest";
    }
     if (b>a & b>c){
        cout<<"b is the largest";
    }
    if (c>a & c>b)
    {
        cout<<"c is the largest";
    }
}