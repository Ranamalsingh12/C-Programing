#include<iostream>

using namespace std;

int main(){
    int row,col;
    cout<<"enter the no of rows";
    cin>>row;
    cout<<"enter the no of column";
    cin>>col;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            if(i==0||i==row){
                cout<<"*";
            }
            else if(j==0|| j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }    
}