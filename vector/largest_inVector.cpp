// // largest element in vector

#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector < int > vec = {2,5,4,8,6,9,11};
    int largest=vec[0];
    for(int i=1;i<vec.size();i++){
        if(largest<vec[i]){
            largest=vec[i];
        }
    }
    cout<<"Largest element in vector is: "<< largest<<endl;
    return 0;
}

// //  using STL method 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {

//     vector<int> vec = {2, 5, 4, 8, 6, 9, 11};

//     int largest = *max_element(vec.begin(), vec.end());

//     cout << "Largest element in vector is: " << largest << endl;

//     return 0;
// }