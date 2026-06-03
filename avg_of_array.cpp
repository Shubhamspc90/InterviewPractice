

// Average  of all element of array
#include<iostream>
using namespace std;

int main(){

    int arr[5];
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arr_size;i++){
        cout<<"enter  number "<<i+1 <<endl;
        cin>>arr[i];  
    }
    int sum=0;

    for(int i=0;i<arr_size;i++){
        sum+=arr[i];
    }
    int avg=0;
    
    avg=sum/arr_size;

    cout<<"Average of element in array is  "<<avg;

    return 0;
}