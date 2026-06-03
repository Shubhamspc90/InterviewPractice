//  largest element in array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 55, 2, 5, 91, 6,44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i < size-1; i++)
    {
        if(largest<arr[i+1]){
            largest=arr[i+1];
        }
    }

    cout<<"Element in array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\nLargest element in Array is "<<largest;
    return 0;
}