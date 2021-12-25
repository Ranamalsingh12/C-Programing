#include<iostream>
using namespace std;
int main(){
    int j=1;
    do{
        int i=1;
        do{
            cout<<j<<" "<<i;
            cout<<endl;
            i++;
        }while(i<=3);
        j++;
            cout<<endl;

    }while(j<=3);
}
