#include <iostream>
#include <vector>

using namespace std;

int main(){

    //vector is just a dynmaic array with continious memory location
    vector<int> v ;
    //initially its capacity is 0 when we push some values in it . it changes its capacity
    //we insert data in vector using push back function

    v.push_back(1);
    cout<<v.capacity()<<endl;

    v.push_back(2);
    cout<<v.capacity()<<endl;

    v.push_back(3);
    cout<<v.capacity()<<endl;
    
    //it double its capacity when it exceed its limit
    //function is same as array

    cout<<"before pop"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size"<<v.size()<<endl;
    v.clear();
    cout<<"after clear size"<<v.size()<<endl;
}