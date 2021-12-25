#include<iostream>
#include<array>

using namespace std;

int main(){
    int basic[3] = {3,2,4};
    
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at index 3 is " <<a.at(3)<<endl;
    cout<<"array is empty or not " <<a.empty()<<endl;
    cout<<"first element is" <<a.front()<<endl;
    cout<<"last element is" <<a.back()<<endl;
}