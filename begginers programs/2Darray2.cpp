#include<iostream>

using namespace std;

int main(){
    int a[3][3] =
    {
        {2,5,8},
        {4,7,8},
        {1,0,8}  //smart initialisation
    };
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3 ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}