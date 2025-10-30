#include<iostream>
using namespace std; 

int count_set_bits(int num){
    return __builtin_popcount(num);
}

int main(){
    cout<<count_set_bits(64)<<"\n";
    return 0;
}