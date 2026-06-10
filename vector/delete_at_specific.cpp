#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec={10,20,30,40,50,60};
    cout<<" Original vector"<<endl;
    for(int v:vec){
        cout<<v<<" ";
    }
    int position;
    cout<<"\nenter the position to delete:"<<endl;
    cin>>position;
   
    if(position>=0 && position <=vec.size()){
        vec.erase(vec.begin()+position);
        cout<< "Update vector "<<endl;
        for(int v:vec){
        cout<<v<<" ";
        }

    }else{
        cout<<"wrong postion entered."<<endl;
    }

    
    return 0;

}