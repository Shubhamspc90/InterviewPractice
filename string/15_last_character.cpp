 // last chacrecter os string
#include<iostream>
#include<string>
using namespace std;
int main(){

    string str;
    cout<<"Enter string "<<endl;
    getline(cin,str);

    // // method 1
    // if(!str.empty())
    // cout << str[str.length()-1];

    // // method 2
    // for(int i=str.length()-1;i>=0;i--){
    //     cout<<str[i]<<endl;
    //     break; 
    // }

    //  // method 3
    if(!str.empty())
    cout << str.back();
    
  
    
    
    
    return 0;
}