#include<iostream>
using namespace std;

int main(){;
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(x<arr[i]) count++;
    }
    cout<<count;
    return 0;
}