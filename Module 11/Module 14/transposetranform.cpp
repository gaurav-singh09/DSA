//isme hm ek matrix ko transpose karte hain
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows/columns  : ";
    cin>>m;
    
    cout<<"Enter the m*m elements of the matrix : "<<endl;
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

    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            if(i<j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0; j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}