// Find the length of a string without using built-in function.

#include<iostream>
#include<string>
using namespace std;

int main(){

    string str="shubham chauhan pra";
    // cout<<str.length();
    int count = 0;
    for(char ch:str){
        count++;
    } 
    cout<<"length of "<< str << " is: "<<count;

    return 0;
}