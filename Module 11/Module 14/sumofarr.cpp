#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns respectively : ";
    cin>>m>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }

    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
           sum=sum+arr[i][j];
        }

    }
    cout<<sum;

}