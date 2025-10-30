#include<iostream>
#include<vector>

using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main(){;
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(18);
    v1.push_back(16);
    v1.push_back(13);
    v1.push_back(32);
    v1.push_back(16);
    v1.push_back(2451);
    v1.push_back(14);
    display(v1);
    
    vector<int>v2(v1.size());
    
    return 0;
}