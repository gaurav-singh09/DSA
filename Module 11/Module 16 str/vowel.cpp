#include<iostream>
#include<string>
using namespace std;

int main(){;
    int n;
    cout<<"Enter the number n : ";
    cin>>n; 
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<endl;
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
        i++;
    }
    cout<<count;

    
    
    return 0;
}