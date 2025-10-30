#include<iostream>
#include<vector>
using namespace std;

int main(){;
    vector<int>v;
    v.push_back(6);
    v.push_back(65);
    v.push_back(653);
    v.push_back(63);
    v.push_back(62);
    v.push_back(6);
    v.push_back(65);
    v.push_back(653);
    v.push_back(63);
    v.push_back(62);
    v.push_back(665);
    v.push_back(667);
    v.push_back(6632);
    v.push_back(665);
    v.push_back(667);
    v.push_back(6632);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    
    
    v.pop_back();
    v.pop_back(); //capacity change nhi hoti but element hat jata hai 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<" "<<v.capacity()<<endl;
    return 0;
}