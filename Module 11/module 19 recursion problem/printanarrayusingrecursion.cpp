#include<iostream>
#include<vector>

using namespace std;

void input(int arr[],int n,int idx){
    if(idx==n) return ;
    cin>>arr[idx];
    input(arr,n,idx+1);
}

void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);    
}

void display2(vector<int>& v,int idx){
    if(idx==v.size()) return ;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}
int max(int arr[],int n, int idx,int sum){
    if(idx==n) return sum;
    if(arr[idx]>sum) sum=arr[idx];
}

int main(){
    int arr[]={4,5,2,6,2,54,423,432,23567,32};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<" ";
    // vector<int> v(n);
    // for(int i=0;i<n;i++){
    //     v[i]=arr[i];
    // }
    // input(arr,n,0);
    // display(arr,n,0);
    // display2(v,0);
    max(arr,n,0,INT64_MIN);
    return 0;
}