//   // last character of word of sentence
// // method 1
// #include<iostream>
// #include<string>
// #include<sstream>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a sentence."<<endl;
//     getline(cin,str);
//     stringstream ss(str);
//     string word;
//     while(ss>>word){
//        if(!word.empty()){
//         cout<<word[word.length()-1];
//        }
//     }

//     return 0;
// }

// // method 2
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a sentence."<<endl;
    getline(cin,str);
   
    for(int i=1;i<str.length()+1;i++){
        if(str[i-1]!=' ' && str[i]==' '){
            cout<< str[i-1]<<endl;
        }
    }
    if(!str.empty()){
        // cout<<str[str.length()-1]; //or
        cout<<str.back();
    }

    return 0;
}