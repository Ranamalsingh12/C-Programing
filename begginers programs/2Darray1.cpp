#include<iostream>

using namespace std;

int main(){
    int a[3][3];  //declaration of 2D array
    a[0][0]=2; // initialisation
    a[0][1]=4;
    a[0][2]=9;
    a[1][0]=4;
    a[1][1]=5;
    a[1][2]=6;
    a[2][0]=3;
    a[2][1]=1;
    a[2][2]=8;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3 ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}