   //  Second Largest (distinct) element 
   // with climits
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {2, 5, 9, 5, 3, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {

        if(arr[i] < smallest) {

            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest &&
                arr[i] != smallest) {

            secondSmallest = arr[i];
        }
    }

    cout << "Smallest = " << smallest << endl;

    if(secondSmallest == INT_MAX)
        cout << "No second smallest distinct element";
    else
        cout << "Second Smallest = " << secondSmallest;

    return 0;
}


// // wiyhout climits
// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = {2, 5, 9, 5, 3, 2};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Find smallest
//     int smallest = arr[0];

//     for(int i = 1; i < n; i++) {
//         if(arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     // Find second smallest distinct
//     int secondSmallest = -1;

//     for(int i = 0; i < n; i++) {

//         if(arr[i] != smallest) {

//             if(secondSmallest == -1 || arr[i] < secondSmallest) {
//                 secondSmallest = arr[i];
//             }
//         }
//     }

//     cout << "Smallest = " << smallest << endl;

//     if(secondSmallest == -1)
//         cout << "No second smallest distinct element";
//     else
//         cout << "Second Smallest = " << secondSmallest;

//     return 0;
// }