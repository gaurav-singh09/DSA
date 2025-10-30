#include<iostream>
#include<climits>
using namespace std;

int main(){;
    int arr[]={5,3,1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int ele : arr){//for each element aa jata hai ye vector ke andar use krte hain jayda tar 
        cout<<ele<<" ";
    }
    cout<<endl;
    // B.S me passes hote hain
    //min ele dhundho
    //replace with first ele 
    /*
    53142
    13542
    12543
    12345
    dubba hamesha chota hhota jayega
    it seems better than b.sort but it's T.C is bad from the B.Sort
    T.C = o(n^2)*/
    // for(int i=0;i<n;i++){
    //     int small=arr[0];
    //     for(int j=0;j<n;j++){
    //         if(small>arr[j]) small=arr[j];
    //     }
    //     cout<<small;
    // }
      //selection sort 
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        // min ele calc in orange box
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int ele : arr){//for each element aa jata hai ye vector ke andar use krte hain jayda tar 
        cout<<ele<<" ";
    }
    
    return 0;
}

/*
S.C  O(1)
T.C 
best case O(n^2)
average
 case O(n^2)
worst case O(n^2)
stability of selection sort (in bubble sort stability jb uska order same ho)
selection sort me unstability aata hai mtlb relative order change ho jata hai 
now , Insertion Sort Algorithm is better . 
When to use Selection Sort .
     Cost of swapping is given then we can use selection sort 
     maan liijye starting sekuch k min ele nikalne hai out of n then minimum nikal ke rok denge . 
     and if size of arr is small then S.S is good.*/