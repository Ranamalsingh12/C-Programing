// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
    
    
// }

#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int lastOcc(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[6] = {1,2,3,3,3,5};
    
    //First and last occurence
    // cout << "First Occurence of 3 is "<<firstOcc(even,6,3)<<endl;
    // cout << "last Occurence of 3 is "<<lastOcc(even,6,3)<<endl;


    int firstIndex = firstOcc(even,6,3);
    int lastIndex = lastOcc(even,6,3);

    int totalOcc = lastIndex - firstIndex + 1;
    cout<<"Total no of occurence of 3 are "<< totalOcc << endl;
}