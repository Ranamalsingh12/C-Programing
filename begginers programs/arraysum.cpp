#include<iostream>

using namespace std;

int main(){
    int n;
    int a=0;
    
    cout<<"enter 5 elements in array";
    cin>>n;
    
    int arr[n];
    for(int i = 0; i <= n; i++){
        cin>>arr[i];
    }


    for(int i=0;i<n; i++) {
        a = a + arr[i];
    }
    cout<<a<<endl;
    
}