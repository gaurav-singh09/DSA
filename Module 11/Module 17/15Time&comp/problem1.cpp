#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){;
    int n;
    cin>>n;
    int arr[n+1];
    int sum=0;
    int smfd=(n*(n+1)/2);
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n+1;i++){
        cout<<arr[i];
    }
    for(int i=0;i<n+1;i++){
        sum+=arr[i];
    }
    int diff=sum-smfd;
    cout<<"The duplicate num is "<<diff<<endl;
    

    
    return 0;
}