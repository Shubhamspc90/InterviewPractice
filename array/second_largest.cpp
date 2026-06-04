// //second largest element in array
    //  when duplicacy is not present 
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,5,3,7,6,9};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Size of an array is "<<size<<endl;
//     cout<<"Original array is :"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

//     for(int i=0;i<size;i++){

//         for(int j=i+1;j<size;j++){

//             if(arr[i]>arr[j]){

//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;   
//             }
//         }
//     }

//     cout<<"\nAfter sorting "<<endl;
//      for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }


//     cout<<"\nSecond largest element in array :  "<<arr[size-2]<<endl;


//     return 0;
// }

    
// ////////////

 //  when duplicacy is present 
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {

//     int arr[] = {2, 5, 3, 8, 9, 9, 9, 8};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;

//     for(int i = 0; i < n; i++) {

//         if(arr[i] > largest) {

//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > secondLargest && arr[i] != largest) {

//             secondLargest = arr[i];
//         }
//     }

//     cout << "Largest = " << largest << endl;
//     cout << "Second Largest = " << secondLargest;

//     return 0;
// }


///
#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 5, 3, 8, 9, 9, 9, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int secondLargest = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << secondLargest;

    return 0;
}