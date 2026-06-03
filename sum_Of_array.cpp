
// sum of all element of array
#include<iostream>
using namespace std;

int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter  number "<<i+1 <<endl;
        cin>>arr[i];  
    }
    int sum=0;

    for(int i=0;i<5;i++){
        sum+=arr[i];
    }

    cout<<"Sum of element in array is  "<<sum;

    return 0;
}