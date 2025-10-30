#include<iostream> //important also binary array
using namespace std;

int main(){;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    //input
    for(int i = 0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched"<<endl;
    int x;
    cin>>x;
    //check mark 
    bool flag = false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            flag = true;
        }
        if(flag==true) cout<<"Element found at : "<<i<<endl;
        else cout<<"404 element not found";
    }
    
    return 0;
}