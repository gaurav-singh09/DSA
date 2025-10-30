#include<iostream>
#include<vector>

using namespace std;
// void change(int arr[]){
//     arr[0]=100;
// }
// void change2D(int ar[3][3]){
//     ar[0][0]=100;
// }
void change2Dvector(vector<vector<int>>&v){
    v[1][1]=100;

}
// void length(vector<vector<int>&v){
//     cout<<v.size();
// }

int main(){;
    // int arr[3]={1,2,3};
    // cout<<arr[0];
    // change(arr);
    // cout<<arr[0];
    // int ar[3][3]={1,2,3,4,5,6,7,8,9};
    // change2D(ar);
    // cout<<ar[0][0];
    //single arr me no of rows paas krne ki jarurat nhi hoti aur 
    //doubleme rows and column dono paas krna hota hai 
    
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int>v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    
    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[1][1]<<endl; 
    change2Dvector(v);
    cout<<v[1][1];
    //yahan hamen size mention krne ki jaruurat nhi padhi 
    // length(v);





    
    return 0;
}