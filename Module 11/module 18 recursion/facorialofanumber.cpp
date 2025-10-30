#include<iostream>
using namespace std;

// int factorial(int x){
//     if(x==0) return 1;
//     int factorial;
//     factorial*=factorial(x-1);
// }
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1) ;
}

int main(){;
    int x;
    cin>>x;
    fact(x);
    // fact=(n-i)*fact(n-i-1);
    //5=5*4*3*2*1
    // int n;
    // cin>>n;
    // int fact = 1;
    // for(int i=0;i<n;i++){
    //     fact*=(n-i);
    // }
    cout<<fact(x)<<endl;
    
    return 0;
}