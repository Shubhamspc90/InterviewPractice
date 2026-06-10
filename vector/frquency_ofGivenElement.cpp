// find the fraquency of target element

// One-line Summary
// for(int v : vec) → Copies each element into v.
// for(int &v : vec) → v is a reference to the original element (can modify it).
// for(const int &v : vec) → v is a read-only reference to the original element (no copy, cannot modify).



#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec={1,2,4,3,1,2,1};

    int target,frequency=0;
    cout<<"enter target element \t";
    cin>>target;
     
        // method 1
    // for(int v: vec){
    //     if(v == target){
    //         frequency++;
    //     }
    // }

           // method 2
    // for(int &v : vec){
    //     if(v == target) {
    //         frequency++;
    //     }
    // }

          // method 3
    for(const int &v : vec) {
        if(v == target)
            frequency++;
    }


    cout<<"\nfrequency of "<<target <<" is: "<<frequency<<endl;
    
    return 0;
}
    

//  method 4 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {

//     vector<int> vec = {1,2,4,3,1,2,1};

//     int target;
//     cout << "Enter target element: ";
//     cin >> target;

//     int frequency = count(vec.begin(), vec.end(), target);

//     cout << "Frequency of " << target << " is: " << frequency << endl;        

//     return 0;
// }