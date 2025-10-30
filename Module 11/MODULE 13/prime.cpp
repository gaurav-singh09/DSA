#include<iostream>
using namespace std;

void Isprime(int n){
    
    int count = 0 ;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
        
    }
    count==2?cout<<"prime":cout<<"not prime";
}

int main(){;
    int n;
    cin>>n;

    Isprime(n);
    
    
    return 0;
}