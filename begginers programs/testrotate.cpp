#include<iostream>

using namespace std;


int main(){
    int n,r;

    cout<<"Enter the size of the array :  ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    int arr1[n];
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    cout<<"Enter the no of rotation : ";
    cin>>r;


    cout<<"result is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}