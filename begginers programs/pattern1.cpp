#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n;
    // cout<<"Please enter line no. "<<endl;
    // cin >> n;
    for(i=4;i>=1;i--){
        for(j=1;j<=4;j++){
            if(j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // for(i=0; i<n; i++) {

    //     //print space
    //     for(j=0; j < n - (i + 1); j++) {
    //         cout<<" ";
    //     }

    //     // print star
    //     for(j=0; j <= i; j++) {
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

}    
    