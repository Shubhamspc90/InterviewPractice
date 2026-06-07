// the difference between largest and smallest element in array
 
#include<iostream>
#include<climits>
using namespace std;

int main() {

    int arr[] = {4,3,5,6,8,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Smallest Element = " << smallest << endl;
    cout << "Difference = " << largest - smallest << endl;

    return 0;
}