#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
    int a;
    cout<<"enter the value of your integer: ";
    cin>>a;

    // THIS IS USING A STRING STREAM METHOD
    stringstream str;
    str<<a;   //insert operator insetring value of a in str

    string str2;
    str>>str2;   //extraction operator extract the data out of the vaiable a

    cout<<"the value of your int data is : "<<a<<endl;
    cout<<"value of int after converting into string data is : "<<str2<<endl;
    return 0;

    // THIS IS USING A TO_STRING()METHOD

    string str;
    str = to_string(a);

    cout<<"the value of int to sting is : "<<str;


}