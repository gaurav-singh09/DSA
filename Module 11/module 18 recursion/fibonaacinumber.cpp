#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //1 1 2 3 5 8 13 21 
    cout<<fibo(n);
    //fibo(n)=fibo(n-1)+fibo(n-1)
    return 0;
}