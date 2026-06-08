//  firat and last element in vector

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int > vec={ 3,5,7,8,9}; 
    cout<<" First element of vector "<<vec[0]<<endl;
    cout<<" last element of vector "<<vec[vec.size()-1]<<endl;
    // using STL 

    cout<<" using STL  front() and back() "<<endl;
    cout<<" First element of vector "<<vec.front()<<endl;
    cout<<" last element of vector "<<vec.back()<<endl;
    return 0;
}