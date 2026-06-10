#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    
    vector<int>vec={3,2,6,5,7,9,8,1};
    cout<<"\nOriginal vector"<<endl;

    for(int v:vec){
        cout<<v<<" ";
    }

    sort(vec.begin(),vec.end());
    cout<<"\nAfter sort in Ascending "<<endl;
    for(int v:vec){
        cout<<v<<" ";
    }

    return 0;
}