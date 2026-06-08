// reversing the vector

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector< int > vec={1,2,3,4,6,5};
    cout<< "Before revesing vector:"<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    // method 1 (using loop)
    // cout<<"\nAfter Reversing vector:"<<endl;
    // for(int i=vec.size()-1;i>=0;i--){
    //     cout<<vec[i]<<" ";
    // }

    // method 2 (using reverse) 
    reverse(vec.begin(), vec.end());
    cout << "\nAfter reversing vector:"<<endl;
    for(int val : vec) {
        cout << val << " ";
    }
  

    return 0;
}