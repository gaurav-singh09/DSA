#include<iostream>
using namespace std;

int main(){;
    //022570976409
    int arr[]={0,2,2,5,7,0,9,7,6,4,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=n-1;
    
    while(i<=j){
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            
            j--;
        }
        else i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}