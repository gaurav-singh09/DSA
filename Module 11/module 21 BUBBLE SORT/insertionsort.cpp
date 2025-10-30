//insertion sorting
/*
53142
using insertion sort
do bhaag me divide hoga sorted part and unsorted part
ek ek size ka like 
5|3142 5 is sorted
3 will find the right place in the left
35|142
135|42
1345|2
12345|

53142
35142
31542
13542
13452 1st index then 2nd index then 3rd index sbko apne    apne jagah pr le ke jao yaar
13425
13245
12345 T.C O(n^2) in best case it is O(n)
*/
#include<iostream>
using namespace std;

int main(){;
    int arr[]={5,3,2,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

    //insertion sort
    for(int i=0;i<n;i++){
        int j=i;
        // while(j>=1){
        //     if(arr[j]>=arr[j-1]) break;
        //     else swap(arr[j],arr[j-1]);
        //     j--;
        // }
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }//both are correct
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    /*
    worst case and avg. case O(n^2)
    stability of insertion sort
    just like bubble sort
    */
    return 0;
}