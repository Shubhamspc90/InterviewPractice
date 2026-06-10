#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int>vec={3,2,6,5,7,9,8,1,9};
    cout<<"\nOriginal vector"<<endl;
    for(int v:vec){
        cout<<v<<" ";
    }

    //vector<int>vec2=vec;  //Method 1: Direct Assignment (Most Common)
 
    //vector<int> vec2(vec);  //  Method 2: Copy Constructor

    // vector<int> vec2(vec.size());
    // copy(vec.begin(), vec.end(), vec2.begin()); // Method 3: Using copy() Function

    vector<int> vec2;
    vec2.assign(vec.begin(), vec.end());  //  Method 4: Using assign()

    // just for printing the vector
    cout<<"\nAfter copying vector "<<endl;
    for(int v:vec2){
        cout<<v<<" ";
    }

   

    return 0;
}