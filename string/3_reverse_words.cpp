// //  //revering words or sentence 

// // method 1
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){

//     string str;
//     cout<<"Enter  words or  sentence" <<endl;
//     getline(cin,str);
//     cout<<str<<endl;
//     string word=" ";
//     for(char ch : str){
//         if(ch == ' '){
//             if(!word.empty()){
//                reverse(word.begin(),word.end());
//                cout<<word;
//             }
//             word =" ";
//         }else{
//             word += ch;
//         }
//     }
//     if(!word.empty()){
//         reverse(word.begin(),word.end());
//         cout<<word;
//     }
//     return 0;
// }

// // method 2


#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){

    string str;
    cout<<"Enter words or sentence"<< endl;
    getline(cin,str);
    string word;
    stringstream ss(str);
    while(ss>>word){
        reverse(word.begin(),word.end());
        cout<<word <<" ";
    }
    return 0;
}
