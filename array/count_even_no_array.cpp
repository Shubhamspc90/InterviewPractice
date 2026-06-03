
// Count even element of array
#include<iostream>
using namespace std;

int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter  number "<<i+1 <<endl;
        cin>>arr[i];  
    }
    int count=0;

    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            count ++;
        }
    }

    cout<<"Even element in array is  "<<count;

    return 0;
}