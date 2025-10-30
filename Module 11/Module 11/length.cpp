#include<iostream>
using namespace std;
int getlength(int arr[],int m){
    int count=0;
    
    for(int i=0;i<m;i++){
        count++;
    }
    return count;
}
int main(){
    int even[]={2,4,6,8,3,5};
    cout<<"Length of the array is :"<<getlength(even,6);
    
    return 0;
}