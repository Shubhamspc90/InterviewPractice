// copy one array to another array

#include<iostream>
using namespace std;

int main(){

    int arr1[]={2,4,3,6,5,8,};
    int arr2[6];
    int size=sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<size;i++){
       arr2[i]=arr1[i];
    }
    for(int i=0;i<size;i++){
       cout<<arr2[i]<<" ";
    }


    return 0;
}