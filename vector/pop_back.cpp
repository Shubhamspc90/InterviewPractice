#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec={2,3,5,4,6,7,8};
    cout<<"Before pop_back() operation ( means  original vector)"<<endl;
    for(int val : vec){

        cout << val <<" ";
    }

    vec.pop_back();
    vec.pop_back();

    cout<<"\nAfter pop_back() operation ( means  original vector)"<<endl;
    for(int val : vec){

        cout << val <<" ";
    }
    return 0;
}