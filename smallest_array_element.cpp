//  smallest element in array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {11,9,4,8,2,6,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest = arr[0];
    for (int i = 0; i < size-1; i++)
    {
        if(smallest>arr[i+1]){
            smallest=arr[i+1];
        }
    }

    cout<<"Element in array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<"\nSmallest element in Array is "<<smallest;
    return 0;
}