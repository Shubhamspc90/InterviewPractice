
// // sum af all element in vector 
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector <int > vec;
//     int size,num;
//     cout<<"enter size of vector"<<endl;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cout<< "enter number"<<i+1 << "\t";
//         cin>>num;
//         vec.push_back(num);
//     }
//     cout<<"element in vector : "<<endl;
//     for(int val : vec){
//         cout<<val<<" ";
//     }

//     int sum=0;
//     for(int val : vec){
//         sum = sum + val;
//     }
//     cout<<"\nSum of element in vector "<<sum<<endl; 

//     return 0;
// }

// STL Approach using accumulate()
// The <numeric> header provides accumulate():


#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main() {

    vector<int> vec = {10, 20, 30, 40, 50};

    int sum = accumulate(vec.begin(), vec.end(),0);
    // The third parameter is the initial value (starting sum).
    // It does not represent an index; it is added to the final sum.

    cout << "Sum = " << sum << endl;

    return 0;
}

// vector<int> vec = {1, 2, 3, 4};
// cout << accumulate(vec.begin(), vec.end(), 0) << endl;  // 10
// cout << accumulate(vec.begin(), vec.end(), 5) << endl;  // 15
// cout << accumulate(vec.begin(), vec.end(), 100) << endl; // 110

