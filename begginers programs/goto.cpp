#include<iostream>

using namespace std;
int main(){
    test:cout<<"tanu is the most ugliest girl in the universe"<<endl;
    cout<<"enter your age - ";
    int age;
    cin>>age;
    if(age>15){
        goto test;
    }
    else{
        cout<<"mayank is a handsome boy"<<endl;
    }
}