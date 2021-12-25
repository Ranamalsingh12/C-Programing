#include<iostream>
using namespace std;

int main(){
    int i=0;
    for (i=0;i<6;i++){
        int j=5;
        for(j = 5;j>=i; j--){
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}