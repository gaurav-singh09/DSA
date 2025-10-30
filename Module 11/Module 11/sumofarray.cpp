#include<iostream>
using namespace std;

int main(){;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    int sum=0;
    //input
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}