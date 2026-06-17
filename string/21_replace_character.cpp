//  //  replace character from another character
//  // 
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    cout<<"\nOriginal String :"<<str<<endl;
    char c1;
    cout<<"Enter the character you want to replace .";
    cin>>c1;
    char c2;
    cout<<"Enter the character which you want in replacement.";
    cin>>c2;

    for(char &ch: str){
        if(ch==c1){
            ch=c2;
        }
    }
    cout<<"\nAfter replacement:"<<str<<endl;
  

    return 0;

}