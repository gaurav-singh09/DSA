#include<iostream>
using namespace std;
int sum(int a, int b){
    if(a>b) return 0;
    if(a%2!=0) return a+sum(a+1,b);
    else return sum(a+1,b);
}

int main(){;
    int a,b;
    cout<<"Enter the Number between which we can :"<<endl;
    cin>>a>>b;
    cout<<sum(a,b);

    return 0;
}