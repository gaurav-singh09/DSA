#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[]={1,4,5,6,3,2,9,54,8,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){//n-1 me t.c badh jata hai isliye use n-i-1
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }    
        }

    }//T.C =O(n square)
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}