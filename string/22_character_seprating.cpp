//  //  character  seperation from  string
//  // 
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    cout<<"\nOriginal String :"<<str<<endl;

    for(char ch: str){
        cout<<ch<<" ";
    }

    return 0;
}