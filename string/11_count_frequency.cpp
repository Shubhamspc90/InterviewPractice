
// //  // count the frequency
// //  // method 1
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){

//     string str;
//     cout<<"Enter the string "<<endl;
//     getline(cin, str);
//     for(int i=0 ; i< str.length(); i++){
//         bool counted = false;
//         for(int k=0;k<i;k++){
//             if(str[i]==str[k]){
//                counted = true;
//                break;
//             }
//         }
//         if(counted){
//             continue;
//         }
//         int count=0;
//         for(int j=0;j < str.length(); j++){
//             if(str[i] == str[j]){
//                 count++;
//             }
//         }
//         cout<< "Frequency of " << str[i] << " is "<< count<<endl;
//     }
        
//     return 0;
// }

//  // method 2

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    int freq[256]={0};
    for(char ch: str){
        freq[ch]++;
    }
    for(int i=0;i<256;i++){
       if(freq[i]>0){
          cout<<"frequency of "<<char(i)<< " is "<<freq[i]<<endl;
       }
    }
    return 0;
}