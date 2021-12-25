#include<iostream>

using namespace std;

class base{
    int a;
    char b;
    float c;
};

void fun(int arr1[]){
    cout<<"size of array in function: "<<sizeof(arr1)<<endl;
}

int main(){
    base mayank;
    cout<<"size of class base is:"<<sizeof(mayank)<<endl;
    //size of array

    int arr[4]={10,4,6,7};
    cout<<"size of array is:"<<sizeof(arr)<<endl;

// array as a function

    int arr1[]={1,2,4,6};
    fun(arr1);

    return 0;
}