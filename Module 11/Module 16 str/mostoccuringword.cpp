#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    

    //to find the number 
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count =1;
        maxcount=max(maxcount,count);

    }

    //to print the word
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxcount) {
            cout<<v[i]<<" "<<maxcount<<endl;
        }

    }
}