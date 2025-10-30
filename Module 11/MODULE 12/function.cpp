#include<iostream>
using namespace std;

int main(){;
    int arr[]= {4,2,6,1,7};
    int* ptr =arr;// or &arr kuch bhi do sab same hai giving address
    // cout<<ptr<<endl;
    // ptr[0]=8;
    for(int i=0; i<=4;i++){
        cout<<ptr[i]<<" ";
    // i[ptr], *ptr, i[arr] is also valid 
    }
    cout<<endl;
    *ptr = 8; // ptr[0]=8
    for(int i=0; i<=4;i++){
        cout<<ptr[i]<<" ";

    }
    cout<<endl;
    ptr ++;
    *ptr=9;
    for(int i=0; i<=4;i++){
        cout<<ptr[i]<<" ";

    }
    return 0;
}