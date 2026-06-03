// Reverse an array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<"enter number "<<i+1<<endl;
        cin>>arr[i];
    }
    cout<<"Original Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    int start=0;
    int end=size-1;
    int temp=0;
    while(start<end){
       // swap(arr[start],arr[end]);  // built-in method
    temp=arr[end];
    arr[end]=arr[start];
    arr[start]=temp;
    start++;
    end--;
    }
    cout<<"\nReverse Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}