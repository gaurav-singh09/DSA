#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergevector(vector<int>& v1,vector<int>& v2,vector<int>& v3){
    int i=0;
    int j=0;
    while(i<v1.size()&&j<v2.size()){
        if(v1[i]<v2[j]){
            v3.push_back(v1[i]);
            i++;
        }
        else{
            v3.push_back(v2[j]);
            j++;
        }

    }
    while(i<v1.size()){
        v3.push_back(v1[i]);
    }
    while(j<v2.size()){
        v3.push_back(v2[j]);
    }


}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    vector<int>v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);

    int m=v1.size();
    int n=v2.size();

    vector<int>v3(m+n) ;
    
    mergevector(v1,v2,v3);

    for(int i=0; i<v3.size(); i++){
        cout<<v3[i];
    }

    

    return 0;
}