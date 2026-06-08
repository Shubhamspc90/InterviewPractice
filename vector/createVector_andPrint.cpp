//  creating vector and printing all elemet of it .

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int >vec={1,2,5,8,6,9};
    cout<<"size of vector: "<<vec.size()<<endl;
    cout<<"Element in vector (using for loop):"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    cout<<"\nElement in vector (using for each loop):"<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}