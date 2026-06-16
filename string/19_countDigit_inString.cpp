//  // count the digit present in string
//  // method 1
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string"<<endl;
//     getline(cin,str);
//     int count=0;
//     for(char ch : str){
//         ch=int(ch);
//         if( ch>=48 && ch<=57){
//             count++;
//             cout<<char(ch)<<" ";
//         }
//     }
//     cout<<"Total digit present in string:  "<<count<<endl;
//     return 0;
// }


//  // method 2 ,, using header file #include<cctype>  and method isdigit()

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    int count=0;
    for(char ch : str){
        if(isdigit(ch)){
            count++;
            cout<<ch<<" ";
        }
    }
    cout<<"\nTotal digit present in string:  "<<count<<endl;
    return 0;
}
