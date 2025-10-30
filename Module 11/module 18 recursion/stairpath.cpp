#include<iostream>
using namespace std;

int stair(int x){
    if(x==1)return 1;
    if(x==2) return 2;


    return stair(x-1) + stair(x-2);
}

int main(){;
    // int n;
    // cin>>n;
    cout<<stair(5);
    return 0;
}