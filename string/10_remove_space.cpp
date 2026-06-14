// remove space from string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);

    cout<<"length of original string: "<<str.length()<<endl;
    cout<<str<<endl;

//   for(const char &ch: str){
//     if(ch==' '){
//         continue;
//     }
//     else{
//         cout<<ch;
//     }
//   }

//  // or 
    string result="";
    for(const char &ch: str){
        if(ch!=' ')
        result+=ch;
    }
    cout<<"length of modified string: "<<result.length()<<endl;
    cout<<result;
    return 0;
}