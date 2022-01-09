#include<iostream>
using namespace std;

int main(){

    int ans=0;
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n ; i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}