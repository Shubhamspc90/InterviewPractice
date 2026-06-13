// // // Palindrome
// //  // method 1
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){

//     string str1;
//     cout<<"Enter a word "<<endl;
//     getline(cin,str1);
//     cout<<"Original String "<<str1<<endl;
    
//     string str2;

//     for(int i=str1.length()-1;i>=0;i--){
//         str2+=str1[i];
//     }
//     cout<<"After reversing the String "<<str2<<endl;


//     if(str1 == str2){
//         cout<<"Palindrome";
//     }else{
//         cout<<"Not Palindrome";
//     }

//     return 0;
// }

// // // method 2
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main(){

//     string str;
//     cout<<"enter word"<<endl;
//     cin>>str;
//     string rev=str;
//     reverse( rev.begin(),rev.end());

//     if(str == rev){
//         cout<<"Palindrome";
//     }else{
//         cout<<"Not Palindrome";
//     }
//     return 0;
// }

//   // method 3
/*Here's the complete palindrome program using the Two Pointer Approach:*/
#include<iostream>
#include<string>
using namespace std;

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;

    while(left < right) {

        if(str[left] != str[right]) {
            cout << "Not Palindrome";
            return 0;
        }

        left++;
        right--;
    }

    cout << "Palindrome";

    return 0;
}