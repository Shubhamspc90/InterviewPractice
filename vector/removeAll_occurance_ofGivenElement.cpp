// remove all occurance of target element. 

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> vec={1,9,4,4,1,2,2,4,1};
    vector<int>vec2;
    int target;
    cout<<"enter target element \t";
    cin>>target;

   // vec.erase(remove(vec.begin(), vec.end(), target), vec.end()); // stl  (algorithm )
    for(const int &v : vec){
        if( v!=target){
            vec2.push_back(v);
        }
    }

    for(const int &v : vec2){
        cout<< v <<" ";
    }
    

    return 0;
}