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

    cout<<"\nAfter sorted in descending"<<endl;
    sort(vec.rbegin(),vec.rend());
      for(int v:vec){
        cout<<v<<" ";
    }

   

    return 0;
}