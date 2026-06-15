// // concate two string 
//  //  method 1 (best)
#include<iostream>
#include<string>
using namespace std;
int main(){

    string str1,str2;
    cout<<"Enter 1st string "<<endl;
    getline(cin,str1);
    cout<<"Enter 2nd string "<<endl;
    getline(cin,str2);

    string str3=str1+str2;
    cout<<str3;
    return 0;
}

/*
//Method 2: Using append()
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "Shubham";
    string str2 = "Chauhan";

    str1.append(str2);

    cout << str1;

    return 0;
}

*/

/*
// Method 3: Using +=
   string str1 = "Shubham";
   string str2 = "Chauhan";
   
   str1 += str2;
   
   cout << str1;
*/

/*
// Method 4: Using a Loop
   string str3 = str1;

   for(char ch : str2)
   {
       str3 += ch;
   }
*/