#include<iostream>
using namespace std;

int main(){;
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=15;
    for(int i=0;i<n;i++){
        if(arr[i]>x) {
            cout<<arr[i-1];//for upper bound just print arr[i]
            break;
        }
    }
    //o(n)T.C but we have to make it for t.c O(log n)//we have to use binary search 

    return 0;
}