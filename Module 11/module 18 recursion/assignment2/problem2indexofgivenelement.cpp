#include<iostream>
using namespace std;

int print(int arr[],int sz){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// int find(int arr[],int sz){

// }

int main(){;
    int n;
    int p;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<print(arr,n);
    cout<<endl;
    // cout<<find(arr,n);
    cout<<"Enter the number whose index is to be found : "<<endl;
    cin>>p;
    for(int i=0;i<n;i++){
        if(arr[i]==p) cout<<i<<endl;
    }


    return 0;
}