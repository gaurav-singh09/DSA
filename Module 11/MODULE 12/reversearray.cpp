#include<iostream>
#include<vector>
using namespace std;
void display (vector<int>v1){
    for(int i=1;i<v1.size();i++){
        
    }
}

int main(){
    vector<int>v1;
    v1.push_back(1);
    // v[1]={9};
    // v.push_back(45);
    // v.push_back(654);
    // v.push_back(654);
    // v.push_back(6543);
    // v.push_back(654);
    // v.push_back(643);
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";
    // cout<<v[5]<<" ";
    // cout<<v[6]<<" ";
    v1.push_back(2);
    v1.push_back(6);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);

    display(v1);

    vector<int>v2(v1.size());
    for(int i=0;i<v2.size();i++){
        // int j=v1.size()-1-i;
        v2[i]=v1[v1.size()-1-i];
    }

    display(v2);
    
    
    

    return 0;
}