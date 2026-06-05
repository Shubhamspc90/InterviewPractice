// elementpresent in array or not 
#include<iostream>
using namespace std;

int main(){

    int arr[]={2,4,5,8,6,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements in array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int target;
    bool present = false;
    cout<< "\nEnter target element \t"<<endl;
    cin>>target;

    for(int i=0;i<size;i++){
        if(arr[i] == target){
            present = true;
        }
    }

    if(present){
        cout<<"Target element is present "<<endl;
    }else{
        cout<<"Target element is not present"<<endl;
    }
    return 0;

}