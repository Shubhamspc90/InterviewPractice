// // count the special symbol present in string
// // method 1
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string with some special symbol "<<endl;
//     getline(cin,str);
//     int count=0;
//     for(char ch : str){
//       if(!(ch >= 'A' && ch <= 'Z') && 
//          !(ch >= 'a' && ch <= 'z') &&
//          !(ch >= '0' && ch <= '9') &&
//           ch != ' '
//         ){
//            count++;
//            cout<<ch<<" ";
//        }
//     }
//     cout<<"\nTotal special symbol present in string:  "<<count<<endl;
//     return 0;
// }

//  //method 2  Using isalnum() (Best), #include<cctype>
//  // isalnum() returns true if the character is a letter or digit.

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string with some Specal character"<<endl;
    getline(cin,str);
    int count = 0;
    for(char ch : str){
        if(!isalnum(ch)){
            count++;
            cout<<ch<<" ";
        }
    }
    cout << "\nTotal Special Characters: " << count;

    return 0;

}