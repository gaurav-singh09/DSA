#include<iostream>
using namespace std;

int main(){
    // int x = 9;
    // bool found = false;
    // for(int i = 1; i <= 9; i++) {
    //     if((i * i) == x) {
    //         cout << i;
    //         found = true;
    //         break;
    //     }
    // }
    // if(!found) {
    //     cout << -1;
    // }


    //By Binary Search
    int x=36;
    int lo=0;
    int hi=36;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if((mid*mid)==x) return mid;
        else if(mid*mid<x)lo=mid+1;
        else {
            mid*mid>x;
            hi=mid-1;
        }
    }

    return 0;
}