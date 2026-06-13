// count the words in sentence 

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){

    string str ;
    cout<<" Enter the sentence "<<endl;
    getline(cin,str);
    stringstream ss(str);
    string word;
    int count=0;
    while(ss>>word){
        count ++;
    }
    cout<<count;
    return 0;
}