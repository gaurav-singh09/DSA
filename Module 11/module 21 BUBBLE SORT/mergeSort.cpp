#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) v[k++]=a[i++];
        else v[k++]=b[j++];
    }
    if(i==a.size()) while(j<b.size()) v[k++]=b[j++];
    if(j==b.size()) while(i<a.size()) v[k++]=a[i++];
}
void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1),b(n2);
    //copy pasting
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];//yahan v[i+n2 ] lene pr value kuch alag aa jata hai jo ki is tarah se hai 0 2 3 3 5 65 1685015900(a garbage value)
    //magic aka rearrange
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a,b,v);
    a.clear();//ye space hatane ka tarika hai ... jisse hamara space complexity O(nlog n se ghat ke sirf O(2n) ho jata hai . )
    b.clear();
}
int main(){
    int arr[]={3,1,5,23,2,65,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}