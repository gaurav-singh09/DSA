#include<iostream> 

#include<vector>
using namespace std;


int main(){
    int m,n;
    cout<<"Enter the number of rows and columns respectively : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int j=0;j<n;j++){
        for(int i=0; i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // TAKING IT IN NEW ARRAY
    int arr2[n][m];

    for(int j=0;j<n;j++){
        for(int i=0; i<m;i++){
            arr2[j][i]=arr[i][j];
        }
    }
    cout<<endl;
    for(int j=0;j<n;j++){
        for(int i=0; i<m;i++){
            cout<<arr2[j][i]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}