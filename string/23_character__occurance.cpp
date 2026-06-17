// //  // occurance of character in string 

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;
//     cout<<"enter a string"<<endl;
//     getline(cin,str);
//     for(int i=0;i<str.length();i++){
//         bool present = false;
//         for(int k=0;k<i;k++){
//             if(str[i]==str[k]){
//                 present = true;
//             }
//         }
//         if(present){
//             continue;
//         }
//         int count =0;
//         for(int j=0;j<str.length();j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         cout<<str[i]<<" -> "<<count<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);

    int freq[256]={0};
    for(char ch : str){
        freq[ch]++;
    }

    for(int i=0;i<256;i++){
       if(freq[i] > 0){
            cout<<char(i)<<" -> "<< freq[i]<<endl;
       }
    }
   
    


    return 0;
}