#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m,n;
    cout<<"Enter the no. of rows and col respectively: ";
    cin>>m>>n;
    cout<<"Enter the  elements of array: "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];

        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i <m; i++)
    {
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }    
    cout<<endl;
    for(int i=0;i<m;i++){
        if(i%2!=0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }  
    cout<<endl;
    for(int i=m-1;i>=0;i--){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }  
    cout<<endl;
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        
    }
     
    
}