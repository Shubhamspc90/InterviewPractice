// printing  Reverse  element of an array

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
    cout<<"\nAfter reversing the Array"<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }


    return 0;
}