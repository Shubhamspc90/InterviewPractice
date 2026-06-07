// #include<iostream>
// using namespace std;

// int main() {

//     int arr[] = {2,4,3,2,5,3,7,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     cout << "Duplicate elements are: ";

//     for(int i = 0; i < size; i++) {
//         for(int j = i + 1; j < size; j++) {
//             if(arr[i] == arr[j]) {
//                 cout << arr[i] << " ";
//                 break;
//             }
//         }
//     }

//     return 0;
// }


//method 2 
#include<iostream>
using namespace std;

int main() {

    int arr[] = {2,4,3,2,5,3,7,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Duplicate elements are: ";

    for(int i = 0; i < size; i++) {

        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}