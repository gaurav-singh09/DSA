#include<iostream>
#include<vector>
#include<string>
// it was with relative order 
//bubble sort is a swapping like thing
//B.S O(n^2) inbuilt sort O(nlog(n))

using namespace std;

int main(){
    int arr[]={5,0,1,2,0,0,4,0,3}; //output ;- 512430000 relative order should be maintained in this 
    int n=sizeof(arr)/sizeof(arr[0]);
    // int i=0;
    // int j=9-1;
    // while(i<j){
    //     if(arr[i]==0){
    //         swap(arr[i],arr[j])
    //     } 
    //     i++;
    //     else j--;
    // }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
    for(int i=0;i<n;i++){//n-1 passes
        //traverse
        for(int j=0;j<n-1;j++){
            if(arr[j]==0){
                //swap
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<endl;

    }
    for(int k=0;k<n;k++){
        cout<<arr[k];
    }
}