// //  //first character of each word of a sentence.
//  //  // method 1
// // #include<iostream>
// // #include<string>
// // #include<sstream>
// // using namespace std;

// // int main(){

// //     string str;
// //     cout<<"Enter the sentence"<<endl;
// //     getline(cin ,str);
// //     string word;
// //     stringstream ss(str);

// //     while(ss>>word){
// //         if(!word.empty()){
// //             cout<<word[0]<<endl;
// //         }
// //     }
// //     return 0;
// // }

// //  // method 2
#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    cout<<"Enter sentence"<<endl;
    getline(cin,str);
    if(!str.empty()){
        cout<<str[0]<<endl;
    }
    for(int i=1;i<str.length();i++){
        if(str[i-1]==' ' && str[i]!=' '){
            cout<< str[i]<<endl;
        }
    }
    return 0;
}