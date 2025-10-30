#include<iostream>
using namespace std;


string decimal_to_binary(int x){
    string result="";
    while(x>0){
        if(x%2){
            //even
            result="0"+result;
        }
        else{
            //odd
            result="1"+result;
        }
        x=x/2;//x>>1; left side 
    }
    return result;
}
int main(){;
    cout<<decimal_to_binary(19)<<"\n";
    return 0;
}