#include<iostream>
using namespace std;

int main(){
    int i=0;
    for (i=0;i<5;i++){
        int j=0;
        for(j = 0;j<=i; j++){
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}