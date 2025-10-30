#include<iostream>
#include<vector>
using namespace std;

void sort01m2(vector<int>& v){
    int i=0;
    int j=1;
    if(v[j]==1)j--;
    if(v[i]==0)i--;
    if(v[j]==0 && v[i]==1){
        v[j]=1;
        v[i]=0;
    }
}

int main(){;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int i=0;
    int j=v.size()-1;
    
    while(i<j){
        if(v[j]==1)j--;
        if(v[i]==0)i++;
        if(v[i]==1 && v[j]==0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    sort01m2(v);
    return 0;
}