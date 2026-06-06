// Is sorted in ascending order

#include <iostream>
using namespace std;
int main()
{

    int arr[5];
    cout << "Enter 5 random element in array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element" << i + 1 << endl;
        cin >> arr[i];
    }

    int isSorted = true;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            isSorted = false;
        }
    }

    if (isSorted)
    {
        cout << "\nArray is sorted in ascending Order" << endl;
    }
    else
    {
        cout << "\nArray is not in sorted in ascending order" << endl;
    }
    return 0;
}

// #include <algorithm>

// if(is_sorted(arr, arr + size))
//     cout << "Sorted";
// else
//     cout << "Not Sorted";
