#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int ans = 0;
    int arr[n];
    for (int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}