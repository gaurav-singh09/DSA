#include<iostream>
// #include<bitset>

using namespace std;
void print(int n){
    if(n==0) return ;
    cout<<n<<endl;
    print(n-1);
    return;
}

void rudra(int n){
    if(n==0) return ;
    rudra(n-1);
    cout<<n<<endl;
}

int main(){
    
    print(9);
    cout<<endl;
    rudra(9);

}