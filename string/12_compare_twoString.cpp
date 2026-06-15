// // campare two string 
//  // 
#include<iostream>
#include<string>
using namespace std;
int main(){

    string str1,str2;
    cout<<"Enter 1st string "<<endl;
    getline(cin,str1);
    cout<<"Enter 2nd string "<<endl;
    getline(cin,str2);

    if(str1==str2){
        cout<<"both are same"<<endl;
    }else{
        cout<<"both are not same"<<endl;
    }
    return 0;
}