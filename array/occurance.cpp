// Occurnce of element in array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 4, 6, 3, 4, 5, 2, 2, 8, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Element in Array :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int occurance = 0, target;
    cout << "\nEnter target element " << endl;
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            occurance++;
        }
    }
    cout << target << " present in  array " << occurance << " times"<< endl;

    return 0;
}