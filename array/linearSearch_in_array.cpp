
// Linear Search in element of array
#include<iostream>
using namespace std;

int main(){

    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter  number "<<i+1 <<endl;
        cin>>arr[i];  
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "; 
    }
    
    int target;
    cout<<"\nenter target number "<<endl;
    cin>>target;
    bool found=false;
    int index;
    for(int i=0;i<5;i++){
        if(target==arr[i]){
            found=true;
            index=i;
        }
    }

    if(found){
        cout<<"Target is present at index  "<<index<<endl;
    }
    else{
        cout<<"Target is not present"<<endl;
    }

    return 0;
}