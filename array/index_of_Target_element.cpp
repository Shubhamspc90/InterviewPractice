// index of targeted element

#include<iostream>
using namespace std;
int main(){

    int arr[]={2,4,6,8,5,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Element present in array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<"\nenter target element "<<endl;
    cin>>target;
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            cout<<"target element present on index no . "<<i<<endl;
        }
    }



    return 0;
}