#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    for(int i=0;i<s[i]!='\0';i++){
        if(i%2!=0)s[i]='#';
    }
    cout<<s;

}
