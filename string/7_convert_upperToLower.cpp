// converting UpperCase string to LowerCase string 
//  // method 1
// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// int main(){

//     string str1,str2;
//     cout<<"Enter string"<<endl;
//     getline(cin,str1);
//     for(char ch:str1){
//         ch=tolower(ch);
//         str2+=ch;
//     }
//     for(char ch:str2){
//        cout<<ch;
//     }

//     return 0;
// }

//   //  method2 

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){

    string str;
    cout<<"enter String "<<endl;
    getline(cin,str);
    for(char &ch :str){  // using reference , it actually change in original string
        ch=tolower(ch);
    }
    cout<<str;
    return 0;
}

/*ch is a reference to the actual character in the string, 
so changes are reflected in the original string.*/