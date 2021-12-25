//reference for non const values

#include <iostream>

using namespace std;

int main(){
    int d;
    int &value=d;
    cout<<"the value of a using a reference:"<<value<<endl;


//asigning a value to a reference


    int a=10; // variable initialization  
    int &b=a; // b reference to a  
    std::cout << "value of a is " <<b<< std::endl; 
    
    //address of the functon we dont need to call the function 

    cout<<"the address of main function is: "<<&main<<endl;
}