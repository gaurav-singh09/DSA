#include<iostream>
using namespace std;



int main(){;
    int n;
    cout<<"Enter the size(n) of the array : "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[n-i-1]<<" ";
    }
    
    return 0;
}