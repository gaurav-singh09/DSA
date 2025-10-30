#include<iostream>
#include<vector>

using namespace std;

int main(){
    int m,n;
    cout<<"Enter thrno. of rows and col respectively: ";
    cin>>m>>n;
    cout<<"Enter the elements of array: "<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
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
    int minrow=0, maxrow=m-1;mincol=0,maxcol=n-1;
    while(minrow<=maxrow && mincol<=maxcol){
        for(int i=minrow;i<=maxrow;i++){
            cout<<arr[i][mincol]<<" ";
        }
        mincol++;
        for(int i=mincol;i<=maxcol;i++){
            cout<<arr[maxrow][i]<<" ";
        }
        maxrow--;
        for(int i=maxrow;i>=minrow;i--){
            cout<<arr[i][maxcol]<<" ";  
        }
        maxcol--;
        



    }

}