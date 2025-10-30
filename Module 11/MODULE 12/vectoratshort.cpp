#include<iostream>
#include<vector>
using namespace std;
void change (vector<int>&a){ //it is reference value and the same vector is this . 
    a[0]=100;  
    for(int i=0;i<a.size();i++){
        cout<<a.at(i)<<" ";
        
    }
    cout<<endl;
}//vecots are passed by value &new vector is created . 
//using & am percentage operator we can pass the address and do the change .

int main(){;
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    //v.at(2)=90;
    //cout<<v.at(2);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
        
    }
    cout<<endl;
    change (v);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
        
    }
    
    return 0;
}