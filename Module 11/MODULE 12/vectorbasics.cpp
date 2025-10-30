#include<iostream>
#include<vector>
using namespace std;

int main(){;
    vector<int>v;//not need to mention the size
    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    //v[1]=1;
    v.push_back(9);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    //if you want to update / access
    //cout<<v[0]<<" ";
    //cout<<v[0]<<" ";
    //cout<<v[0]<<" ";
    //cout<<v[0]<<" ";

    
    return 0;
}