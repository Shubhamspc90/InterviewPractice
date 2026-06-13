//  // converting LowerCase string to UpperCase string 
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
//         ch=toupper(ch);
//         str2+=ch;
//     }
//     for(char ch:str2){
//        cout<<ch;
//     }

//     return 0;
// }

// //  // method 2
// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// int main(){

//     string str;
//     cout<<"Enter string"<<endl;
//     getline(cin,str); 
//     for(char &ch:str){  // // using reference , it actually change in original string
//         ch=toupper(ch);
//     }

//     cout<<str;
//     return 0;
// }
// /*ch is a reference to the actual character in the string, so changes are reflected in the original string.*/

//  //  method 3

// #include<iostream>
// #include<string>
// #include<cctype>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string"<<endl;
//     getline(cin,str);
//     int i=0; 
//     while(str[i]!='\0'){   // null character
//         str[i]=toupper(str[i]);
//         i++;
//     }
//     cout<<str;
//     return 0;
// }

//   // method 4

#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    // for(int i=0;str[i]!='\0';i++){
    //     str[i] = toupper(str[i]);
    // }
   
    // ( or)
    for(int i=0;i<str.length();i++){
        str[i] = toupper(str[i]);
    }
    cout<<str;
    return 0;
}
