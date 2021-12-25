// #include <iostream>

// using namespace std;

// int add(int a,int b){
//     return a+b;
// }

// int main(){

//     int (*functptr)(int,int);  //pointer function decelaration

//     functptr=add;  //function is pointing towards add function

//     int sum=functptr(5,5);
//     cout<<"the value of 5+5 is : "<<sum<<endl;
// }

//example of function pointer


#include <iostream>

using namespace std;

void printname(char*name){
    cout<<"name of the person is : "<<name<<endl;
}

int main(){
    char s[20];
    void (*ptr)(char*) //pointer function declaration
    ptr = printname; //storing the address of printname in ptr
    
    cout<<"enter the name of the person : "<<endl;
    cin>>s;  
    cout<<s;  
    ptr(s); // calling printname() function  

}

