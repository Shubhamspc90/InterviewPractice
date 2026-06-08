#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int>vec={1,2,3,4,5,6,7,8,9};
    cout<<"Original vector :"<<endl;
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<"\nOdd no. in vector"<<endl;
    for(int val:vec){
        if(val%2!=0){
            cout<<val<<" ";
        }
    }

    // lambda  function
    int oddCount = count_if(vec.begin(), vec.end(),
                   [](int x){ return x % 2 != 0; });

    cout <<"\nNO. of odd number: "<< oddCount;

    return 0;
}