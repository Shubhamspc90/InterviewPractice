#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    cin>>str;
    char target;
    cout<<"Enter a targeted character"<<endl;
    cin>>target;
    bool present= false;
    for(int i=0;i<str.length();i++){
        if(str[i]==target){
            present =true;
            break;
        }
    }
    if(present){
        cout<<"Targeted character is Exits"<<endl;
    }else{
        cout<<"Targeted character NOT Exits"<<endl;

    }

    return 0;
}