#include<iostream>
using namespace std;

int main(){;
    int n;
    cout<<"Enter the number of size : ";
    cin>>n;
    int  arr[n];
    cout<<"Enter "<<n<<" Numbers : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];//we can use INT_MIN FOR THIS & i will start from 0 itself .





    

    for(int i=1;i<=n-1;i++){
        if(max<arr[i]){
        max=arr[i];
        }
    }
    int smax=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && smax<<arr[i]) smax=arr[i];
    }

    cout<<max<<endl<<smax;
    


    return 0;
}