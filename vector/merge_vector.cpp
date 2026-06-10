// // merge two vector 
// // method 1
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>vec1={1,2,3,4};
//     vector<int>vec2={5,6,7,8,9};
//     vector<int > vec3;
//     for(int v :vec1){
//         vec3.push_back(v);
//     }
//     for(int v :vec2){
//         vec3.push_back(v);
//     }

//     for(int v :vec3){
//         cout<<v<<" ";
//     }
 
//     return 0;
// }

//  method 2

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec1 = {1,2,3,4};
    vector<int> vec2 = {5,6,7,8,9};

    vector<int> vec3 = vec1;

    vec3.insert(vec3.end(), vec2.begin(), vec2.end());

    for(int v : vec3){
        cout << v << " ";
    }

    return 0;
}