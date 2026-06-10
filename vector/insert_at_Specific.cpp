
// insert element at specific position
#include<iostream>
#include<vector>
using namespace  std;

int main(){
    vector<int>vec={1,2,3,4,5};
    for(int v:vec){
        cout<<v<<" ";
    } 

    int position;
    cout<<"Enter the position on which you want to insert "<<endl;
    cin>>position;

    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
   
    vec.insert(vec.begin()+position,num);
    for(int v:vec){
        cout<<v<<" ";
    }

    return 0;
}