#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number of rows/columns of the matrix: ";
    cin>>m;
    cout<<"Enter the m*m elements of the matrix: "<<endl;

    int matrix[m][m];
    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // 90 degree rotation
    // 1st step transpose the matrix
    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            if(i<j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    // 2nd step reverse the matrix  
    for(int i=0;i<m;i++){
        for(int j=0; j<m/2;j++){
            swap(matrix[i][j],matrix[i][m-j-1]);
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // 180 degree rotation
    // 1st step reverse the matrix  

    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m/2;j++){
    //         swap(matrix[i][j],matrix[i][m-j-1]);
    //     }
    // }
    // // 2nd step transpose the matrix
    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m;j++){
    //         if(i<j){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }
    // }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // // 270 degree rotation
    // // 1st step transpose the matrix


    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m;j++){
    //         if(i<j){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }
    // }
    // // 2nd step reverse the matrix
    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m/2;j++){
    //         swap(matrix[i][j],matrix[i][m-j-1]);
    //     }
    // }
    // cout<<endl;

    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // // 360 degree rotation

    // // 1st step reverse the matrix
    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m/2;j++){
    //         swap(matrix[i][j],matrix[i][m-j-1]);
    //     }
    // }
    // // 2nd step transpose the matrix
    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m;j++){
    //         if(i<j){
    //             swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }
    // }
    // cout<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0; j<m;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    return 0;

}
