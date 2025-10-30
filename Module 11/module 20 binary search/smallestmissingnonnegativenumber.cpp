#include<iostream>
using namespace std;

int main(){;
    int arr[]={0,1,2,3,4,8,9,12};
    int n=8;
    // for(int i=0;i<n;i++){
    //     if((arr[i+1]-arr[i])!=1){
    //         cout<<arr[i]+1;
    //         break;
    //     }
    // }


    /*
    for(int i=0;i<n;i++){
        if(i!=arr[i]){
         cout<< i;
        break;
    }
    }
    */

    // BINARY SEARCH to reduce the search space by half 
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;//yahan target nhi de rakha hai yadhi index aur number same ho tb shi hai
        if(arr[mid]==mid) lo=mid+1;//always true
        else {
            ans=mid;
            hi=mid-1;
        }
        //cout<<ans; yahan ans 420105655 aa rha ahi

    }
    cout<<ans;//yadi kuch missing nhi hai to ans aayega -1;

    return 0;
}