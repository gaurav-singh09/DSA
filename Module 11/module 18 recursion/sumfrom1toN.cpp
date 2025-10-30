#include<iostream>
using namespace std;

//      "This will print the numbers from 1 to N as rudra is returning to 0 everytime so it will print the number . "
// int sum(int x){
//     if(x==0)return 0;
//     int rudra=0;
//     rudra+=x;
//     sum(x-1);
//     cout<<rudra<<endl;
//     return rudra ;


// }

int sum(int x){
    if(x==0) return 0;
    int result = x + sum(x-1);
    cout << result << endl;
    return result;
}
//This will print the sum stepwise . 
int main(){;
    sum(5);
    return 0;
}