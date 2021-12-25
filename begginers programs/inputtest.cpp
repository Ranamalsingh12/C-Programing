#include<iostream>
using namespace std;

int main(){
    int n;
    int sum1=0;
    int num;
    cout<<"enter how many no do you want to add up?-";
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>num;
        sum1 += num;
    }

    cout<<sum1;
    return 0;
}