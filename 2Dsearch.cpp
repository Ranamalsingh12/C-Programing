#include<iostream>
using namespace std;


int main(){

    int n,m;
    cin>>n;
    cin>>m;

    int arr[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"Enter the number which you want: ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
        cout<<endl;
    }
    if (flag){
        cout<<"element is found"<<endl;
    }else {
        cout<<"element is not found"<<endl;
    }
    return 0;
}