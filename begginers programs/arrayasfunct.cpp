#include<iostream>
using namespace std;

void printArray(int arr[5]);

int main(){
    int arr1[5]={10,20,50,60,70};
    int arr2[5]={5,10,50,7,6};
    printArray(arr1); //passing array to funtion
    printArray(arr2);
}
void printArray(int arr[5])
{
    cout<<"array element"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}