// this code is for minimum element in array ==>>

// #include<iostream>
// using namespace std;

// void printMin(int arr[5]);

// int main(){
//     int arr1[5]={10,20,50,60,70};
//     int arr2[5]={5,10,50,7,6};
//     printMin(arr1); //passing array to funtion
//     printMin(arr2);
// }
// void printMin(int arr[5])
// {
//     int min = arr[0];
//     for (int i=0;i>5;i++){
//         if (min>arr[i]){
//             min = arr[i];
//         }
//     }
//     cout<<"minimum element is - "<<min<<endl;
// }


//FOR MAX ELEMENT IN ARRAY ==>> 

#include <iostream>

using namespace std;

void Maxout(int arr[5]);

int main(){
    int arr1[5] = {10,30,5,70,5};
    int arr2[5] = {50,55,4,59,33};

    Maxout(arr1);
    Maxout(arr2);
}
void Maxout(int arr[5])
{
    int max = arr[0];
    for(int i=0;i<5;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Maximum element in array is => "<<max<<endl;
}