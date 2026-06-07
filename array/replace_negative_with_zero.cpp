// replace all negative no. with zero 

#include<iostream>
using namespace std;

int main(){

    int arr[]={-1,2,3,-4,5,-6,7,-8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   //  replacing negative with zero
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
    }
    cout<<"\nAfter replacing negative with zero array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}


// method 2  

// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {-1,2,3,-4,5,-6,7,-8,9};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int result[size];

//     for(int i=0;i<size;i++) {
//         if(arr[i] < 0)
//             result[i] = 0;
//         else
//             result[i] = arr[i];
//     }

//     for(int i=0;i<size;i++) {
//         cout << result[i] << " ";
//     }

//     return 0;
// }