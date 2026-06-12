//reverse the string 

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str="shubham chauhan";
    for(const char &ch:str){
        cout<<ch;
    }
    cout<<"\nAfter reversing string"<<endl;
            //method 1
    for(int i=str.length()-1;i>=0;i--){
        cout<< str[i];
    }

    //        // method 
    // string rev="";
    // for(int i=str.length()-1;i>=0;i--){
    //     rev=rev+str[i];
    // }
    // cout<< rev << endl;

    //         // method 3
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;

    return 0;
}