#include<iostream>
using namespace std;

int main(){;
    int a,b;
    cin>>a>>b;
    int sum=1;
    for(int i=0;i<b;i++){
        sum*=a;
    }
    cout<<sum;
    return 0;
}