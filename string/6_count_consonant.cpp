#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    int count=0;
    for(char ch: str){
        ch=tolower(ch);
        if(ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u')
        {
            count ++;
        }
    }
    cout<<"consonant present in "<< str << " is: "<<count<<endl;
    return 0;
}