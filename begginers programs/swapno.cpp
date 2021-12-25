#include <iostream>  
using namespace std;

int main(){
    int a=10,b=12,*p1=&a,*p2=&b;
    cout<<"before swap *p1 "<<*p1<<" *p2 "<<*p2<<endl;
    ∗p1=∗p1+∗p2;    
    cout<<"After swap: ∗p1="<<∗p1<<" ∗p2="<<∗p2<<endl;    

}