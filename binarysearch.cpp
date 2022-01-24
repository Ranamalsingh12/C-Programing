#include<iostream>
using namespace std;

int search(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]{
            start = mid +1;
        })
        else{
            end = mid - 1;
        }

        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index = search(even,6,12);
}


// int binarySearch(int arr[],int n, int key){
//     int s=0;
//     int e=n;
//     while(s<=e){
//         int mid=(s+e)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int key;
//     cin>>key;

//     cout<<binarySearch(arr,n,key)<<endl;
// }