
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 2, 5, 9, 6,44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = 0;
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]<arr[i+1]){
            largest =arr[i+1];
        }
    }

    cout<<"Element in array"<<endl;
    for (int i = 0; i < size-1; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\nLargest element in Array is "<<largest;
    return 0;
}