// #include<iostream>
// using namespace std;

// int hcf(int a,int b){
//     for(int i=min(a,b);i>=2;i--){//T.C O(min(a,b)) i.e . O(n)
//         if(a%i==0 && b%i==0 ) return i;
//     }
//     return 1;
// }


// int main(){;
//     int m,n;
//     cin>>m;
//     cin>>n;
//     cout<<hcf(m,n);
//     return 0;
// }


//BY REcursion
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int hcf(int m,int n){
  if(m=0) return n;
  else return hcf(m%n,m);
    
}

int main(){
    int n,m;
    cin>>m>>n;
    int p=min(m,n);
    int q=max(m,n);
    cout<<hcf(p,q);

}