#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m,n,p,q;
    cout<<"Enter the number of rows and columns of 1st array respectively : ";
    cin>>m>>n;
    cout<<"Enter the elements of 1st array : "<<endl;
    int a[m][n];
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
   
    cout<<"Enter the number of rows and columns of 2nd array respectively : ";
    cin>>m>>n;
    cout<<"Enter the elements of 2nd array : "<<endl;
    int b[p][q];
    for(int i =0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // multiplication of 2 arrays
    // 1st array is m*n and 2nd array is n*p
    if(n!=p){
        cout<<"Multiplication of these array is not possible because number of columns of 1st array is not equal to number of rows of 2nd array."<<endl;
    }
    else{
        int c[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];

                }

            }


        }
        cout<<"Multiplication of 1st and 2nd array is : "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }



    return 0;
}