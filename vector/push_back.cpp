#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector< int > vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for(int val: vec){
        cout<<val<<" ";
    }

    vector<string>vs;
    int size;
    string str;
    cout<<"Enter size of vector"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter string "<<i+1<<endl;  
        cin>>str;
        vs.push_back(str);
    }

    for(string v : vs){
        cout<<v<<" ";
    }

    return 0;
}