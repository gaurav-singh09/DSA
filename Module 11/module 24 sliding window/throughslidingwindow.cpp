#include<iostream>
#include<climits>

using namespace std;

int main(){;
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxsum=0;
    int maxidx=-1;
    int prevsum=0;
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    // cout<<prevsum;
    int i=1,j=k;
    int currsum=0;
    int maxsum=prevsum;
    while(j<n){
        currsum=prevsum+arr[j]-arr[i-1];
        if(maxsum<currsum){
            maxsum=currsum;
            maxidx=i;
        }
        prevsum=currsum;
        i++;
        j--;
    }
    cout<<maxsum<<endl;
    cout<<maxidx;
    
    return 0;
}