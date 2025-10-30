#include<iostream>
using namespace std;

void greet(int x){
    if(x==0) return;
    cout<<"Good Morning Sir"<<endl;
    greet(x-1);

}

int main(){;
    int n;
    cin>>n;
    greet(n);
    return 0;
}