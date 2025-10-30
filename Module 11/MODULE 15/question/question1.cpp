#include<iostream>
#include<vector>
using namespace std;

int main(){;
    int m,n;
    cin>>m>>n;
    int arr1[m][n];
    int arr2[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            arr1[i][k]+=arr2[]
        }
        
    }
    
    return 0;
}