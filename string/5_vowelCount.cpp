// // count the vowel in string
// //  //  method 1
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){

//     string str ;
//     cout<<"Enter String"<<endl;
//     getline(cin,str);
//     int count=0;
//     for( char ch :str){
//        if( ch=='A'  || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
//            ch=='a'  || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
         
//              count++;
//         }
//     }
//     cout<<"vowel present in " <<str << " is: "<< count<<endl;
//     return 0;
// }

//  // method 2

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
     string str ;
    cout<<"Enter String"<<endl;
    getline(cin,str);
    // int count=0;
    // for( char ch :str){
    //     ch=tolower(ch);  // All converted in lowercase
    //     if(ch=='a'  || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    //         count++;
    //     }
    // }
    //   
    //  OR 
    int cnt=0;
    for( char c :str){
        c=toupper(c); // All converted in UpperCase
        if(c=='A'  || c=='E' || c=='I' || c=='O' || c=='U'){
            cnt++;
        }
    }
    // cout<<"vowel present in " <<str << " is: "<< count<<endl;
    cout<<"vowel present in " <<str << " is: "<< cnt<<endl;

}