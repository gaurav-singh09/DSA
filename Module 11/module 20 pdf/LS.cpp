// 4,2,8,5,1,9 target value =5
#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>& arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==target) return i;
    }
    return -1;
}

int main(){
    int arr[]={4,2,8,5,1,9};
    vector<int>v(arr,arr+sizeof(arr)/sizeof(arr[0]));//correct way tp initialize vector from array
    int target=5;
    int index=linearSearch(v,target);// stores result
    
    cout<<index;//print index
}