// commenting something here
// <<<<<<< HEAD
// editing here again
// =======
//editing online
// >>>>>>> e7b2cbaadb5ecbc2bb3d5ec43eccd96264b6cfc6
#include<iostream>
using namespace std;
// int power(int a, int b){
//     int p=1;
//     for(int i=0;i<b;i++){
//         p*=a;
//     }
//     return p;
// }

//By recursion 
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}

int main(){;
    int a;
    int b;
    cout<<"Enter the base value : "<<endl;
    cin>>a;
    cout<<"Enter the exponent value : "<<endl;
    cin>>b;

    cout<<power(a,b);
    return 0;
}
