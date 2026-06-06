//merging two array
#include<iostream>
using namespace std;
int main(){

    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9};
    int arr3[8];
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=size1+size2;
    cout<<"element in first array "<<endl;
    for(int i=0; i<size1; i++){
       cout<< arr1[i]<<" ";
    }

    cout<<"\nelement in second array "<<endl;
    for(int i=0; i<size2; i++){
       cout<< arr2[i]<<" ";
    }

    // copying arr1 to arr3
    for(int i=0; i<size1; i++){
        arr3[i]=arr1[i];
    }
    //  copying arr2 to arr3
    for(int i=0; i<size2; i++){
        arr3[size1+i]=arr2[i];
    }
    //  printing arr3
    cout<<"\nAfter copying the array :"<<endl;
    for(int i=0; i<size3; i++){
        cout<< arr3[i]<<" ";
    }




    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {

//     int arr1[] = {1, 3, 5};
//     int arr2[] = {2, 4, 6};

//     int n1 = 3, n2 = 3;
//     int merged[n1 + n2];

//     int i = 0, j = 0, k = 0;

//     while(i < n1 && j < n2) {

//         if(arr1[i] < arr2[j])
//             merged[k++] = arr1[i++];
//         else
//             merged[k++] = arr2[j++];
//     }

//     while(i < n1)
//         merged[k++] = arr1[i++];

//     while(j < n2)
//         merged[k++] = arr2[j++];

//     for(int x = 0; x < n1 + n2; x++)
//         cout << merged[x] << " ";
// }