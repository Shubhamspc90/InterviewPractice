
// count the occurance of each element 
#include<iostream>
using namespace std;
int main(){

    int arr[]={2,4,3,2,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){

    bool occured=false;
    for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            occured=true;
            break;
        }
    }
    if(occured){
        continue;
    }
    
    int count =0;
        for(int j=0;j<size;j++){
            if(arr[i]== arr[j]){
                count ++;
            }
        }
        cout<<arr[i]<<"->"<<count<<endl;
    }
    return 0;
}