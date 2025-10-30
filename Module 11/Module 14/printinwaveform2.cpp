#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows and columns of array: ";
    cin>>m>>n;
    cout<<"Enter the elements of array: "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<arr[i][j]<<" ";

            }
            else{
                cout<<arr[i][n-j-1]<<" ";
            }

        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}