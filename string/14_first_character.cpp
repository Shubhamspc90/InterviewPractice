#include<iostream>
#include<string>
using namespace std;
int main(){

    string str;
    cout<<"Enter string "<<endl;
    getline(cin,str);

    // // method 1
    if(!str.empty())
    cout << str[0];

    // // method 2
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<endl;break;
    // }

    //  // method 3
    // for(const char &ch : str){
    //     cout<<ch;
    //     break;
    // }

    //  // method 4
    // for(const char ch : str){
    //     cout<<ch;
    //     break;
    // }

    //  // method 5
    // for(char ch : str){
    //     cout<<ch;
    //     break;
    // }
    
    
    
    return 0;
}