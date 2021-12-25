// in binary we make it in 2 to the power
//decimal to binary by /2 and %2 store it
//binary to decimal just multiply it by 2 raise to power with the index num
#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n ;
    cin>>n;
    int flag=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"its a prime number"<<endl;
    }
}