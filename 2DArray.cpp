#include<iostream>
using namespace std;


int main(){

    int n,m;
    cin>>n,m;

    // initialising the 2D array
    int arr[n][m];
    
    //input and output of 2D array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}