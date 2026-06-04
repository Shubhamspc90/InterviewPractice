#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 5, 9, 5, 3, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = arr[0];
    int secondSmallest = arr[0];

    for(int i = 0; i < size; i++) {

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
    cout << "Second Smallest = " << secondSmallest << endl;

    return 0;
}