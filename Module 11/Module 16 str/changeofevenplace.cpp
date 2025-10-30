#include<iostream>
#include<string>
using namespace std;

int main(){;
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<endl;
    cout<<s<<endl<<s[6]<<endl;
    
    for(int i=0;i<s[i]!='\0';i++){
        if(i%2==0)s[i]='a';
    }
    cout<<s;
    return 0;
}