// searchin in vestor

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector< int > vec = { 2,4,5,3,7,6,8};
    cout<<" Element prsent in vector"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<< vec[i] << " " ;
    }
    int target ;
    cout<<"\nEnter target "<<endl;
    cin>>target;
    int found = false;
    for(int val : vec){
        if (val==target){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"Target found"<<endl;
    }else{
        cout<<"Not found" << endl;
    }
    
    return 0;
}