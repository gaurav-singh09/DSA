#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void sort012(vector<int>& v){
    int i=0;
    int j=v.size()-1;
    
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    sort012(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    

    return 0;
}