// // smallest element in vector

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector < int > vec = {2,5,4,8,6,9,1,11,0,-1};
//     int smallest=vec[0];
//     for(int i=1;i<vec.size();i++){
//         if(smallest>vec[i]){
//             smallest=vec[i];
//         }
//     }
//     cout<<"Largest element in vector is: "<< smallest<<endl;
//     return 0;
// }

// // Using STL 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector < int > vec = {2,5,4,8,6,9,1,11,0,-1};

    cout << "Minimum: " << *min_element(vec.begin(), vec.end()) << endl;
    cout << "Maximum: " << *max_element(vec.begin(), vec.end()) << endl;
        return 0;
}
